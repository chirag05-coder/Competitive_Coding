Link for Ques:
https://codeforces.com/contest/1421/problem/A?locale=en

#include<bits/stdc++.h>
#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define lli long long int
using namespace std;
const int M=1e9+7;


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
bool is_prime(int num)
{      if(num==1)
      return false;
      if(num==2 || num==3)
	      return true;
		if(num%2==0 || num%3==0)
		     return false;
	 for(int i=5;i*i<=num;i=i+6)
	   {      if(num%i==0 || num%(i+2)==0)
	              return false;
		   }
		return true;       
}
bool isPerfectSquare(long double x)
{
    // Find floating point value of
    // square root of x.
    if (x >= 0) {
 
        long long sr = sqrt(x);
         
        // if product of square root
        //is equal, then
        // return T/F
        return (sr * sr == x);
    }
    // else return false if n<0
    return false;
}


int main()
{    fastio;

       int t ;
       cin>>t;
       while(t--)
       {
           lli a,b;
           cin>>a>>b;
           lli ans= (a^b);
           cout<<ans<<endl;
       }
       
}



     
