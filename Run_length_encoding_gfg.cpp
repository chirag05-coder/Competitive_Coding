Link for Ques:

https://practice.geeksforgeeks.org/problems/run-length-encoding/1

#include <bits/stdc++.h>
using namespace std;

char *encode(char *src);    
 
int main() {
	
	int T;
	cin>>T;
	while(T--)
	{
		char str[10000];
		cin>>str;
		
		cout<<encode(str)<<endl;
	}
	return 0;
}// } Driver Code Ends


/*You are required to complete this function */

char *encode(char *src)
{   
     
      int cnt=0;
      string str;
      for(int i=0;src[i]!='\0';i++)
      {      if(src[i]==src[i+1])
              {
                  cnt++;
              }
              else
              {
                  str.push_back(src[i]);
                  string s="";
                  s=to_string(cnt+1);
                 // str.push_back(to_string(cnt+1));
                  
                  
                  str+=s;
                  cnt=0;
              }
   
          
      }
     // cout<<str<<endl;
     
      char *str1=new char[str.size()+1];
 int i=0;
 for(;i<str.size();i++)
 {
     str1[i]=str[i];
 }
 str1[i]='\0';
 return str1;
  //Your code here 
  
}     
 
