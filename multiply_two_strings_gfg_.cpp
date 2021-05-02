Link for Ques:
https://practice.geeksforgeeks.org/problems/multiply-two-strings/1#


#include<bits/stdc++.h>
using namespace std;
 

 // } Driver Code Ends

class Solution{
  public:
    /*You are required to complete below function */
    string multiplyStrings(string s1, string s2) {
       //Your code here
       vector<int>v(s1.size()+s2.size(),0);
      if(s1=="0" or s2=="0")
      return "0";
      bool sign=false;
      if(s1.at(0)=='-' and s2.at(0)=='-')
      {
          sign=false;
          s1=s1.substr(1);
          s2=s2.substr(1);
      }
      else if(s1.at(0)=='-' and s2.at(0)!='-')
      {
          sign=true;
          s1=s1.substr(1);
         
      }
      else if(s1.at(0)!='-' and s2.at(0)=='-')
      {
        sign=true;
        s2=s2.substr(1);
      }
     
     
         
          int x1=0,y1=0;

          for(int i=s1.size()-1;i>=0;i--)
          {
              int carry=0;
              int num1=s1.at(i)-'0';
              y1=0;
              for(int j=s2.size()-1;j>=0;j--)
              {
                 int num2=s2.at(j)-'0';
                  int sum=(num1*num2)+v[x1+y1]+carry;
                  carry=sum/10;
                  v[x1+y1]=(sum%10);
                  y1++;
                 
              }
              if(carry>0)
              {
                  v[x1+y1]+=carry;
              }
              x1++;
          }
         
          int k=v.size()-1;
          while (k>=0 && v[k] == 0)
               k--;
         string op="";
         if(sign)
         op.push_back('-');
         while(k>=0)
         {
             op+=to_string(v[k--]);
         }
         return op;
     
     
   }
    

};

// { Driver Code Starts.
 
int main() {
     
    int t;
    cin>>t;
    while(t--)
    {
    	string a;
    	string b;
    	cin>>a>>b;
    	Solution obj;
    	cout<<obj.multiplyStrings(a,b)<<endl;
    }
     
}  // } Driver Code Ends
