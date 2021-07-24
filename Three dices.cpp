Link for Ques:
https://www.codechef.com/START6B/problems/THREDICE


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
int t;
cin>>t;
while(t--)
{
     double x,y;
     cin>>x>>y;
     unordered_map<int,string>umap;
     umap[0]="0";
     umap[1]="0.166666";
     umap[2]="0.333333";
     umap[3]="0.5";
     umap[4]="0.666666";
     if(x+y>6)
     cout<<0<<endl;
     else
     cout<<umap[6-(x+y)]<<endl;
}

      
}


     
