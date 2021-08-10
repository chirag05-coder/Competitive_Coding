//
Link for Ques:
https://www.google.com/url?q=https://codeforces.com/problemset/problem/1358/A&sa=D&source=hangouts&ust=1619701741927000&usg=AFQjCNFwzebllQRuY5hs9Kb53z3L0_EvsQ



#include<iostream>
#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

#define lli long long int

using namespace std;

int main()
{    fastio;
   int t;
   cin>>t;
   while(t--)
   {
        long int n,m;
       cin>>n>>m;
       if((n*m)%2==0)
       {
           cout<<(m*n)/2<<endl;
       }
       else
       {
           cout<<((n*m)/2)+1<<endl;
       }
   }
   
   
    
   
    
}
