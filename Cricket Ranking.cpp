Link for Ques:
https://www.codechef.com/START6B/problems/CRICRANK


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
    int r1,w1,c1,r2,w2,c2;
    cin>>r1>>w1>>c1>>r2>>w2>>c2;
    int a=r1-r2;
    int b=w1-w2;
    int c=c1-c2;
    int A=0,B=0;
    if(a>0)
    {
        A++;
    }
    else 
    B++;
    if(b>0)
    {
        A++;
    }
    else
    B++;
    if(c>0)
    A++;
    else
    B++;
    if(A>B)
    {
        cout<<"A"<<endl;
    }
    else
    cout<<"B"<<endl;
}

      
}


     
