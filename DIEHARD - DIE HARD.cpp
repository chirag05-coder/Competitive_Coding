Link for Ques:
https://www.spoj.com/problems/DIEHARD/


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
           int h,a;
           cin>>h>>a;
           int cnt=1;
          
           int ah=3,aa=2,fh=-5,fa=-10,wh=-20,wa=5;
           h+=ah;
           a+=aa;
           int flag=0;
           while(h>0 and a>0)
           {
                 if(h+fh>0 and a+fa>0)
                 {
                     h+=fh;
                     a+=fa;
                     cnt++;
                     flag++;
                 }
                 else if(h+wh>0 and a+wa>0)
                 {
                       h+=wh;
                       a+=wa;
                       cnt++;
                       flag++;
                 }
                 if(flag)
                 {
                    h+=ah;
                     a+=aa; 
                     cnt++;
                     flag=0;
                 }
                 else
                 break;
                 
                 
               
           }
           cout<<cnt<<endl;
      }

    
     
 
      
}


     
