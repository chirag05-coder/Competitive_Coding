Link for QUes:
https://codeforces.com/contest/1561/problem/A


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
            int n;
            cin>>n;
          
            int arr[n]{0};
            for(int i=0;i<n;i++)
            {cin>>arr[i];
            
               
            }
             int cnt=0;
            while(!(is_sorted(arr,arr+n)))
             {
                  for(int i=1;i<n;i++)
                  {
                      if(i&1)
                       {
                            for(int j=0;j<n;j+=2)
                             {
                                 if(j+1<n and arr[j]>arr[j+1])
                                     swap(arr[j],arr[j+1]);
                                 
                             }
                             cnt++;
                       }
                       else
                       {
                            for(int j=1;j<n;j+=2)
                             {
                                 if(j+1<n and arr[j]>arr[j+1])
                                     swap(arr[j],arr[j+1]);
                                 
                             }
                             cnt++;
                       }
                       if(is_sorted(arr,arr+n))
                          break;
                  }
             }
             cout<<cnt<<endl;
           
            
            
      }
 
}   


     
