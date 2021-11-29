Link for Ques:
https://codeforces.com/contest/1609/problem/A




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

int solve(int *arr, int num, int len)
{
    int ans=0;
    int cnt=0;
    int sum=0;
    for(int i=0;i<len;i++)
    {
        if(i==num)
        continue;
        int x=arr[i];
        if(!(x&1))
        {
           
            while(!(x&1))
            {
               cnt++;
               x/=2;
            }
            sum+=x;
        }
        else
        sum+=arr[i];
    }
    ans=arr[num]*1LL*(pow(2,cnt));
    ans+=sum;
    
    return ans;
}
 
signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t;
    cin>>t;
    while(t--){
       int n;
       cin>>n;
       int arr[n]{0};
      for(int i=0;i<n;i++)
        cin>>arr[i];
       
       priority_queue<int>pq;
       
       for(int i=0;i<n;i++)
       {
           int ans=solve(arr,i,n);
           pq.push(ans);
       }
       cout<<pq.top()<<"\n";
       
    }
   
   
	return 0;
}




     
