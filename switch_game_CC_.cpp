Link for Ques:
https://www.codechef.com/CRKR2021/problems/SWH001



#include<bits/stdc++.h>
#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define lli long long int

using namespace std;
int main()
{    fastio;
int t;
cin>>t;
while(t--)
{
     long long int n;
     cin>>n;
     for(int i=1;i<=(lli)sqrt(n);i++)
     {
          cout<<(i*i)<<" ";
     }
     cout<<endl;
}
     
}
