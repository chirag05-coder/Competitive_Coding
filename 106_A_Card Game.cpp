Link for Ques:
https://codeforces.com/contest/106/problem/A


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
      char t;
      cin>>t;
      string a,b;
      cin>>a>>b;
      unordered_map<char,int>umap;
      int i=1;
      umap['6']=i++;
      umap['7']=i++;
      umap['8']=i++;
      umap['9']=i++;
      umap['T']=i++;
      umap['J']=i++;
      umap['Q']=i++;
      umap['K']=i++;
      umap['A']=i++;
      
      if(a.at(1)==t and b.at(1)!=t)
       {
       
              cout<<"YES"<<endl;
       }
       else
       {
               if(a.at(1)==b.at(1))
                {
                      if(umap[a.at(0)]>umap[b.at(0)])
                         {
                             cout<<"YES"<<endl;
                         }
                         else
                         cout<<"NO"<<endl;
                }
                else
                {
                    cout<<"NO"<<endl;
                }
       }
       
     
}



     
