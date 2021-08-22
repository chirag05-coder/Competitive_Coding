Link for Ques:
https://www.spoj.com/problems/PAIRS1/


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
lli highestPowerof2(lli n)
{
  lli p = (int)log2(n);
  // return (int)pow(2, p);   power
  
     return p;  //number
}



int main()
{    fastio;
    int n,k;
    cin>>n>>k;
    priority_queue<int>pq;
    unordered_map<int,int>umap;
    int x;
    while(n--)
    {
        cin>>x;
        pq.push(x);
        umap[x]++;
    }
    int cnt=0;
    while(!pq.empty())
    {
        if(umap.find(pq.top()-k)!=umap.end())
          {
               cnt++;
          }
          pq.pop();
    }
    cout<<cnt<<endl;
   
   
}


     
