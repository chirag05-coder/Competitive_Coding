Link for Ques:
https://codeforces.com/problemset/problem/467/B


#include<bits/stdc++.h>
#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define lli long long int
using namespace std;
const int M=1e9+7;
lli power(lli a,lli b)
{
     if(b==0 )
        return 1;
       if(b==1)
       return a;
     
      if(!(b&1)) 
      return (power(a,b/2)%M)*(power(a,b/2)%M);
      else
      return ((a)*(power(a,b/2)%M)%M)*(power(a,b/2)%M);

}

lli  gcd(lli u, lli v)
{
   lli shift;
   if (u == 0) return v;
   if (v == 0) return u;
   shift = __builtin_ctz(u | v);
   u >>= __builtin_ctz(u);
   do {
       v >>= __builtin_ctz(v);
       if (u > v) {
         lli t = v;
           v = u;
           u = t;
       }  
       v = v - u;
   } while (v != 0);
   return u << shift;
}


  bool isprime[100];
  void gen()
  {
       for (int i = 2; i < 100; i++) {
        isprime[i] = true;
        for (int j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                isprime[i] = false;
            }
        }
    }
  }
int main()
{   fastio;
     
       lli n,m,k;
       cin>>n>>m>>k;
       
       vector<lli>v;
       lli x;
       for(int i=0;i<m;i++)
       {   cin>>x;
            v.push_back(x);
           
       }
       lli me;
       cin>>me;
       int cnt=0;
      // me=__builtin_popcountll(me);
      // cout<<me<<endl;
       for(int i=0;i<v.size();i++)
       {
           lli temp=(v[i]^me);
           lli count=__builtin_popcountll(temp);
           
           if(count<=k)
             cnt++;
       }
    //   for(auto it:v)
    //   {
    //       cout<<it<<endl;
    //   }
       cout<<cnt<<endl;
       

	
}

     
