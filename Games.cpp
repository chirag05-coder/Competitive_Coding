Link for Ques:
https://codeforces.com/problemset/problem/268/A


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



int main()
{    fastio;

     int n;
     cin>>n;
     unordered_map<int,int>umap;
     unordered_map<int,int>umap1;
     while(n--)
     {
           int x,y;
           cin>>x>>y;
           umap[x]++;
           umap1[y]++;
     }
      
      int cnt=0;
      
     for(auto it:umap)
     {
         if(umap1.find(it.first)!=umap1.end())
           {
                 cnt+= (it.second)*(umap1[it.first]);
           }
     }
     cout<<cnt<<endl;
     
     
 
      
}


     
