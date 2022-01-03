Link for Ques:
https://codeforces.com/contest/1615/problem/B


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
bool palindrome(vector<int>arr, int n)
{
    // Initialise flag to zero.
    int flag = 0;
 
    // Loop till array size n/2.
    for (int i = 0; i <= n / 2 && n != 0; i++) {
 
        // Check if first and last element are different
        // Then set flag to 1.
        if (arr[i] != arr[n - i - 1]) {
            flag = 1;
            break;
        }
    }
 
    // If flag is set then print Not Palindrome
    // else print Palindrome.
    if (flag == 1)
       return false;
       return true;
  
}

signed main()
{    fastio;
        int mm=2e5+1;
        int pref[mm][19];
        for(int j=0;j<mm;j++)
        {
        for(int i=0;i<19;i++)
           pref[j][i]=0;
        }
        for(int i=1;i<mm;i++)
        {
              int x=i;
              int in=0;
              while(x>0)
              {
                    pref[i][in]=x%2+pref[i-1][in];
                    x/=2;
                    in++;
              }
              
        }
        
       
          int t;
          cin>>t;
          while(t--)
          {
             int l,r;
             cin>>l>>r;
             int maxx=LONG_LONG_MIN;
             for(int i=0;i<19;i++)
             {
                 maxx=max(maxx,pref[r][i]-pref[l-1][i]);
             }
             cout<<(r-l+1)-maxx<<endl;
          }
           
           
    }




     
