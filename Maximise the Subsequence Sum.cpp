Link for Ques:
https://www.codechef.com/START10B/problems/SIGNFLIP


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



int main()
{    fastio;
int t;
 cin>>t;
 while(t--)
 {
    int n,k;
    cin>>n>>k;
    int arr[n]{0};
    for(int i=0;i<n;i++)
       cin>>arr[i];
       
       
      sort(arr,arr+n);
     for(int i=0;i<k;i++)
     {
           if(arr[i]<0)
             {
                   arr[i]=arr[i]*(-1);
             }
             else
             break;
     }
     
     int sum=0;
     for(int i=0;i<n;i++)
     {  
           if(arr[i]>0)
             sum+=arr[i];
           
     }
     cout<<sum<<endl;
 }

     

     
      
}


     
