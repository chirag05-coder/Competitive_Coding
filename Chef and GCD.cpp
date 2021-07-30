Link for Ques:
https://www.codechef.com/COOK131B/problems/CHFGCD



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
	    long long int x,y;
        cin>>x>>y;
       
            if(gcd(x,y)>1)
            cout<<"0"<<endl;
            else if(gcd(x+1,y)>1 or gcd(x,y+1)>1)
            cout<<"1"<<endl;
            else if((x&1) and (y&1))
            cout<<"2"<<endl;
            else
            cout<<"1"<<endl;
	}

      
}


     
