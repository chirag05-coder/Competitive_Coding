Link for Ques:
https://codeforces.com/problemset/problem/1535/A


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
  {   int a,b,c,d;
      cin>>a>>b>>c>>d;
       int max1=max(a,b);
        int max2=max(c,d);
        
        if((max1>=c and max1>=d and (a+b-max1<=c or a+b-max1<=d)) or ( max2>=a and max2>=b and (c+d-max2<=a or c+d-max2<=b)))
         {
             cout<<"YES"<<endl;
         }
         else
         {
             cout<<"NO"<<endl;
         }
       
        
        
  }

      
}


     
