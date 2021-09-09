Link for Ques:
https://codeforces.com/contest/1203/problem/C


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


int main()
{    fastio;

    
   int n;
     cin>>n;
     lli arr[n]{0};
     bool odd=false;
     cin>>arr[0];
     if(arr[0]&1)
     odd=true;
     lli ans=arr[0];
     for(int i=1;i<n;i++)
     {
         cin>>arr[i];
         ans=gcd(ans,arr[i]);
        if(arr[i]&1)
        odd=true;
     }
    //  ll mini=*(min_element(arr,arr+n));
     std::vector<lli>v;
    lli mini=ans;
    for (lli i=1; i<=sqrt(mini); i++)
    {
        if (mini%i == 0)
        {
           
            if (mini/i == i)
            {
               
                  v.push_back(i);
            }
 
            else 
              {
                  
                  v.push_back(i);
                  v.push_back(mini/i);
              }
        }
    }
    cout<<v.size()<<"\n";

}


     
