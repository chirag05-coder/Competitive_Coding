Link for Ques:
https://codeforces.com/contest/186/problem/A


#include<bits/stdc++.h>
#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
//#define lli long long int
using namespace std;
const long long int mod=1e9+7;


signed main()
{    fastio;

        
         
    
                  string a,b;
                  cin>>a>>b;
                  
                  string s=a,s1=b;
                  sort(s.begin(),s.end());
                  sort(s1.begin(),s1.end());
                  
                  if(s!=s1)
                  {
                      cout<<"NO";
                  }
                  else
                  {
                      int diff=0;
                      for(int i=0;i<a.length();i++)
                      {
                             if(a.at(i)!=b.at(i))
                              {
                                   diff++;
                              
                      }
                      }
                      if(diff!=2)
                      {
                      
                          cout<<"NO"<<endl;
                      }
                      else
                      cout<<"YES"<<endl;
                      
                  }
                 
       
}



     
