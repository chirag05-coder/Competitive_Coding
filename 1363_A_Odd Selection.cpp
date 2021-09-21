Link for Ques:
https://codeforces.com/contest/1363/problem/A



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
      int t;
     cin>>t;
    while(t--){
         int n,x;
         cin>>n>>x;
         int arr[n]{0};
         lli sum=0;
         unordered_map<string,int>umap;
         umap["odd"]=0;
         umap["even"]=0;
         for(int i=0;i<n;i++)
           {
                   cin>>arr[i];
                   sum+=arr[i];
                   if(arr[i]&1)
                   umap["odd"]++;
                   else
                   umap["even"]++;
           }
           if(umap["even"]==0 and x%2==0 and umap["odd"]>=x)
           {
                   cout<<"NO"<<endl;
           }
           else
           {
           
           if(x==n)
           {
                  if(sum&1)
                     cout<<"Yes"<<endl;
                     else
                     cout<<"No"<<endl;
           }
           else
           {
                int u= umap["odd"];
                 if(u&1)
                 {
                       if(u>0 and u+umap["even"]>=x)
                        {
                            cout<<"Yes"<<endl;
                        }
                        else
                        cout<<"No"<<endl;
                 }
                 else
                 {
                     u-=1;
                     if(u>0 and u+umap["even"]>=x)
                        {
                            cout<<"Yes"<<endl;
                        }
                        else
                        cout<<"No"<<endl;
                     
                 }
           }
           }
           
     }
}



     
