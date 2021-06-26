Link for Ques:
https://codeforces.com/contest/1541/problem/B



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
   int n;
   cin>>n;
   unordered_map<int,int>umap;
   int arr[n]{0};
   for(int i=0;i<n;i++)
   {
         cin>>arr[i];
         umap[arr[i]]=i+1;
   }
   
   int cnt=0;
   
   for(int i=0;i<n;i++)
   {
        int ele=arr[i];
        int limit=i+1+n;
        int k=1;
        while(ele*k<=limit)
        {
             if(umap.find(k)!=umap.end() and umap[k]+i+1==ele*k and umap[k]>i+1)
               {
                   cnt++;
               }
               k++;
        }
        
        
       
   }
   cout<<cnt<<endl;

      
}
}


     
