Link for Ques:
https://codeforces.com/contest/1585/problem/C



#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);
#define endl "\n"
#define ld long double
#define vll vector<ll>
#define vi vector<int>
#define vb vector<bool>
#define pi pair<int,int>
#define pll pair<ll,ll>
#define vp vector<pi>
#define vpll vector<pll>
#define pb push_back
#define mp make_pair
#define mt make_tuple
#define F first
#define S second
#define forn(i,a,b) for(ll i=a;i<b;i++)
#define forni(i,a,b) for(int i=a;i<b;i++)
#define all(x) x.begin(),x.end()
#define rall(x) x.rbegin(), x.rend()
#define mint map<int,int>
#define mall map<ll,ll>
#define gu(a,s) get<a>(s)
#define tin tuple<ll,ll,ll>
#define ter(x,y,z) ((x)?y:z)
#define deb1(x) cout<<#x<<" "<<x<< "\n"
#define deb2(x,y) cout<<#x<<" "<<x<<" "<<#y<<" "<<y<<"\n"
#define deb3(x,y,z) cout<<#x<<" "<<x<<" "<<#y<<" "<<y<<" "<<#z<<" "<<z<<"\n"
#define vin(a) for(auto &x:a) cin>>x
#define vout(a) for(auto x:a) cout<<x<<" ";cout<<endl
//<----------------------------------------------------------------------------------------------------------------------------------------------->

const ll maxn = 3e5 + 5;
const ll max_val = 2e5 + 10;
ll mod = 1e9 + 7;

//<----------------------------------------------------------------------------------------------------------------------------------------------->
    
    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("out.txt", "w", stdout);
    // #endif 

int main()
{  
   fast

   ll t=1;
   cin>>t;
   while(t--)
   {
       ll n,k;
       cin>>n>>k;
       vll p,ng;
       ll cm=0;
       forn(i,0,n)
       {
           ll a;
           cin>>a;
           if(a<0)
           {
               ng.pb(-a);
           }
           else
           {
               p.pb(a);
           }

       }
       sort(rall(p));
       sort(rall(ng));
     
       ll c1=0,c2=0;
       ll ans=0;
       for(ll i=0;i<p.size();i+=k)
       {
           ans+=p[i];
           if(i)
           ans+=p[i];
           else
           c1=p[i];
       }
       for(ll i=0;i<ng.size();i+=k)
       {
           ans+=ng[i];
           if(i)
           ans+=ng[i];
           else
           c2=ng[i];
       }
       
       cout<<ans+min(c1,c2)<<endl;
    
      
   }
   return 0;
}
