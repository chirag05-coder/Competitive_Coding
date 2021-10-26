Link for Ques:
https://codeforces.com/contest/143/problem/A


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
       int r1,r2,c1,c2,d1,d2;
       cin>>r1>>r2>>c1>>c2>>d1>>d2;
       
       int c=((c1-r1)+d2)/2;
       set<pair<int,int>>st;
       
       if(c<=0)
        { cout<<"-1"<<endl;
        }
        else
        {  unordered_set<int>st;
        
        int a=(c1-c);
        int b=(d2-c);
        int d=(r2-c);
        if(a<=0 or b<=0 or c<=0 or d<=0 or a>9 or b>9 or c>9 or d>9 or a+b!=r1 or a+d!=d1 or a+c!=c1 or b+d!=c2 or b+c!=d2 or c+d!=r2 )
          {
              cout<<"-1";
          }
          else
          {
           st.insert({a,b});
           st.insert({b,a});
           st.insert({d,c});
           st.insert({c,d});
                 if(st.size()==4)
                cout<<a<<" "<<b<<endl<<c<<" "<<d;
                else
                cout<<"-1"<<endl;
          }
          
                
        }
        
     
}



     
