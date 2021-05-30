Link for Ques:
https://codeforces.com/problemset/problem/1498/A


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


lli sum_of_digit(lli num)
{
     lli sum=0;
    while(num!=0)
    {
        lli rem=num%10;
        sum+=rem;
        num/=10;
    }
    return sum;
}
int main()
{    fastio;

      int t;
        cin>>t;
   while(t--){
       lli n;
       cin>>n;
       int x=3;
       lli ans=0;
       while(x--)
       {
           
           if(gcd(n,sum_of_digit(n))>1)
           {
               ans=n;
               break;
           }
           else
           {
               n++;
           }
       }
       cout<<ans<<"\n";
       
   }
 

return 0;
}


     
