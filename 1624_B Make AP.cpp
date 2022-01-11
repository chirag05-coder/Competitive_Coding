Link for Ques:
https://codeforces.com/contest/1624/problem/B


#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
         int a,b,c;
         cin>>a>>b>>c;
         
         if(2*1LL*b==a+c)
          {
              cout<<"YES"<<endl;
          }
          else if((a+c)%(2*b)==0)
           {
               cout<<"YES"<<endl;
           }
           else if((2*b-c>0 and (2*b-c)%a==0) or (2*b-a>0 and(2*b-a)%c==0))
           {
               cout<<"YES"<<endl;
           }
           else
           {
               cout<<"NO"<<endl;
           }
    }
}
