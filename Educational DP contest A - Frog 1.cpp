Link for Ques:
https://atcoder.jp/contests/dp/tasks/dp_a


#include<bits/stdc++.h>
#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long int
using namespace std;
const int M=1e9+7;
// lli power(lli a,lli b)
// {
//      if(b==0 )
//         return 1;
//       if(b==1)
//       return a;
     
//       if(!(b&1)) 
//       return (power(a,b/2)%M)*(power(a,b/2)%M);
//       else
//       return ((a)*(power(a,b/2)%M)%M)*(power(a,b/2)%M);

// }

// lli  gcd(lli u, lli v)
// {
//   lli shift;
//   if (u == 0) return v;
//   if (v == 0) return u;
//   shift = __builtin_ctz(u | v);
//   u >>= __builtin_ctz(u);
//   do {
//       v >>= __builtin_ctz(v);
//       if (u > v) {
//          lli t = v;
//           v = u;
//           u = t;
//       }  
//       v = v - u;
//   } while (v != 0);
//   return u << shift;
// }
// lli highestPowerof2(lli n)
// {
//   lli p = (int)log2(n);
//   // return (int)pow(2, p);   power
  
//      return p;  //number
// }
// bool is_prime(int num)
// {      if(num==1)
//       return false;
//       if(num==2 || num==3)
// 	      return true;
// 		if(num%2==0 || num%3==0)
// 		     return false;
// 	 for(int i=5;i*i<=num;i=i+6)
// 	   {      if(num%i==0 || num%(i+2)==0)
// 	              return false;
// 		   }
// 		return true;       
// }
// bool isPerfectSquare(long double x)
// {
//     // Find floating point value of
//     // square root of x.
//     if (x >= 0) {
 
//         long long sr = sqrt(x);
         
//         // if product of square root
//         //is equal, then
//         // return T/F
//         return (sr * sr == x);
//     }
//     // else return false if n<0
//     return false;
// }

void ways(int n,int m,priority_queue<int,vector<int>,greater<int>>&pq,int cost)
{
        if(n==m)
          {
              pq.push(cost);
              return;
          }
          if(n<=0)
            return;
          if(n>m)
           ways(n-1,m,pq,cost+1);
           
           else
           {
               ways(n-1,m,pq,cost+1);
               ways(n*2,m,pq,cost+1);
               return;
           }
       
           
}
signed main()
{    fastio;
    
         
        int n;
        cin>>n;
        int arr[n]{0};
        for(int i=0;i<n;i++)
         cin>>arr[i];
         
         vector<int>dp(n,0);
         dp[0]=0;
         dp[1]=abs(arr[1]-arr[0]);
         for(int i=2;i<n;i++)
         {
             dp[i]=min(abs(abs(arr[i]-arr[i-2])+dp[i-2]),abs(abs(arr[i]-arr[i-1])+dp[i-1]));
             
         }
        //  for(auto it:dp)
        //     cout<<it<<" ";
        //     cout<<endl;
         cout<<dp[n-1];
         
         
           
           
           
    }




     
