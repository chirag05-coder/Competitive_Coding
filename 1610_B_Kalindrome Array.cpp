Link for Ques:
https://codeforces.com/contest/1610/problem/B



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
bool ispal(vector<ll>& v){
    ll s=v.size();
    ll i=0,j=s-1;
    while(i<j){
        if(v[i]!=v[j]) return 0;
        i++,j--;
    }
    return 1;
} 
bool check(vector<ll>& a,ll x){
    vector<ll> b;
    for(int i=0;i<a.size();i++){
        if(a[i]!=x) b.push_back(a[i]);
    }
    bool ans=ispal(b);
    return ans;
}
void solve()
{
   ll n;cin>>n;
   vector<ll> a(n);
   
   for(int i=0;i<n;i++) cin>>a[i];
   if(n==1 || n==2){
       cout<<"YES"<<endl;return;
   }
   if(ispal(a)){
       cout<<"YES"<<endl;return;
   }

   bool ok=0;
   ll i=0,j=n-1;
   while(i<j){
       if(a[i]!=a[j]){
           ok=check(a,a[i]) || check(a,a[j]);
           break;
       }
       i++,j--;
   }
   if(ok){
       cout<<"YES"<<endl;
   }
   else cout<<"NO"<<endl;
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
