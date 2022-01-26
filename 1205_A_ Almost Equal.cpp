Link for QUes:
https://codeforces.com/contest/1205/problem/A


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

int countOdd(int L, int R){
 
    int N = (R - L) / 2;
 
    // if either R or L is odd
    if (R % 2 != 0 || L % 2 != 0)
        N += 1;
 
    return N;
}
signed main()
{    fastio;
          
                 int n;
                 cin>>n;
                  if(!(n&1))
                 {
                     cout<<"NO"<<endl;
                 }
                 else
               {  cout<<"YES"<<endl;
                    vector<int>a,b,v;
                     a.push_back(1);
                     //b.push_back(2);
                     int cnt=0;
                     bool flag=true;
                    for(int i=2;i<=2*n;)
                    {
                             if(flag)
                              {
                                    if(i<=2*n)
                                    {
                                       b.push_back(i++);  
                                    }
                                    if(i<=2*n)
                                    {
                                       b.push_back(i++);  
                                    }
                                    flag=false;
                              }
                              if(flag==false)
                              {
                                  if(i<=2*n)
                                    {
                                       a.push_back(i++);  
                                    }
                                    if(i<=2*n)
                                    {
                                       a.push_back(i++);  
                                    }
                                    flag=true;
                              }
                    }
                    for(auto it:a)
                    {
                          v.push_back(it);
                    }
                    for(auto it:b)
                    {
                          v.push_back(it);
                    }
                   for(auto it:v)
                   {
                        cout<<it<<" ";
                   }
               }          
          
    }




     
