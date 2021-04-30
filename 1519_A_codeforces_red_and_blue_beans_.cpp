Link for Ques:
https://codeforces.com/contest/1519/problem/A


#include<bits/stdc++.h>
#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define lli long long int

using namespace std;
int main()
{    fastio;
lli t;
cin>>t;
while(t--)
{
     double r,b,d;
       cin>>r>>b>>d;
       if(abs(r-b)==d)
       {
           cout<<"YES"<<endl;
       }
       else
       {
           if(r>b)
           {
               lli large=r;
               if(ceil(large/(1+d))<=b)
               {
                   cout<<"YES"<<endl;
               }
               else
               {
                   cout<<"NO"<<endl;
               }
           }
           else
           {
               lli large=b;
               if(ceil(large/(1+d))<=r)
               {
                   cout<<"YES"<<endl;
               }
               else
               {
                   cout<<"NO"<<endl;
               }
           }
       }
}
     
}
