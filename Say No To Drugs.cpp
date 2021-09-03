Link for Ques:
https://www.codechef.com/CDMN21C/problems/NODRUGS


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
         int n,k,l;
        cin>>n>>k>>l;
        int arr[n]{0};
        int maxi=INT_MIN;
        unordered_map<int,int>ump;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            ump[arr[i]]++;
            maxi=max(arr[i],maxi);
        }
        
        if(k<0 and arr[n-1]==maxi)
        cout<<"Yes\n";
        else
        {
            int store=(arr[n-1]+(l-1)*k);
           if(ump.find(store)==ump.end() and store>maxi )
           {
               cout<<"Yes\n";
           }
           else
           cout<<"No\n";
        }


     }
     
      
}


     
