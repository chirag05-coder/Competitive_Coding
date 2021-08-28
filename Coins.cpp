Link for Ques:
https://codeforces.com/problemset/problem/58/B


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


  bool isprime[100];
  void gen()
  {
       for (int i = 2; i < 100; i++) {
        isprime[i] = true;
        for (int j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                isprime[i] = false;
            }
        }
    }
  }
int main()
{   fastio;
     int num;
	   cin>>num;
	   std::vector<int>v;
	   v.push_back(num);
	   int flag=0;
	   for(int i=num/2;i>0;)
	   {
	        flag=0;
	        for(auto it:v)
	       {
	           if(it%i==0)
	           flag++;
	           
	           else
	           break;
	          
	       }
	       if(flag==v.size())
	       {
	           v.push_back(i);
	           i/=2;
	       }
	       else
	       i--;
	      
	       
	   }
	   for(auto it:v)
	   cout<<it<<" ";
	   cout<<"\n";

	
}

     
