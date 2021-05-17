Link for Ques:
https://www.codechef.com/MAY21C/problems/SOLBLTY

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
       int ini,s_ini,s_fin;
       cin>>ini>>s_ini>>s_fin;
       cout<<(s_ini +(100-ini)*s_fin)*10<<endl;
       
       
   }
     
}
