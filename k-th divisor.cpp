Link for Ques:
https://codeforces.com/problemset/problem/762/A



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

     lli n,k;
     cin>>n>>k;
      vector<lli>v;
      lli i=1;
      for( i=1;i*i<=n;i++)
      {
            if(n%i==0)
            {
                 v.push_back(i);
                 
                 if(n/i!=i)
                 v.push_back(n/i);
                
            }
             
      }
    
       sort(v.begin(),v.end());
  
       if(k>v.size())
       {
           cout<<"-1"<<endl;
       }
       else
       cout<<v[k-1]<<endl;
     
      

      
}


     
