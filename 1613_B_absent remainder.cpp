link for ques:
https://codeforces.com/contest/1613/problem/B



#include<bits/stdc++.h>
#define ll long long
#define ull unsigned long long
ll mod=1000000007;
using namespace std;
 
ll power(ll a, ll b){ // a raised to power b
  ll res=1;
  while(b){
    if(b&1) res=(res*a)%mod;
    b>>=1;
    a=(a*a)%mod;
  }
  return res;
}
 
bool isprime(ll n){
  for(ll i=2;i*i<=n;i++){
   if(n%i==0) return 0;
  }
  return 1;
}
 
void solve()
{
   ll n;cin>>n;
   vector<ll> a(n);
   for(int i=0;i<n;i++) cin>>a[i];
   sort(a.begin(),a.end());
   ll req=n/2;
   ll cnt=0, i=1;
   while(cnt<req){
       cout<<a[i]<<" "<<a[0]<<endl;
       cnt++;i++;
   }
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(0);cout.tie(0);
  int t=1;cin>>t;
  while(t--)
  {
    solve();
  }
  return 0;
}
