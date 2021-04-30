Link for Ques:
https://www.codechef.com/LTIME95B/problems/CCHEAVEN


#include<bits/stdc++.h>
#define endl "\n"
#define lli long long int

using namespace std;
int main()
{    
int t;
	cin>>t;
	while(t--)
	{
	     int n;
	      cin>>n;
	      cin.ignore();
	      string str;
	      cin>>str;
	      if(str.at(0)=='1')
	      {
	          cout<<"YES"<<endl;
	          continue;
	      }
	  
	   int z=0,o=0,flag=0;
	     for(int i=0;i<n;i++)
	     {
	           if(str.at(i)=='1')
	           {
	               o++;
	               if(o>=z)
	               {    flag++;
	                    cout<<"YES"<<endl;
	                   break;
	               }
	           }
	           else
	           {
	               z++;
	           }
	     
	         
	         
	     }
	     if(flag==0)
	     {
	         cout<<"NO"<<endl;
	         
	     }
	}
     
}
