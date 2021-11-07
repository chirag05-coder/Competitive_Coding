Link for ques:
https://codeforces.com/contest/509/problem/B


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


signed main()
{    fastio;
    int n,k;
      cin>>n>>k;
      int maxi=INT_MIN;
      int mini=INT_MAX;
     vector<int>inner;
      vector<vector<int>>outer;
      int x;
      for(int i=0;i<n;i++)
      {
          cin>>x;
          maxi=max(maxi,x);
          mini=min(mini,x);
          
          for(int j=1;j<=x;j++)
          {
              inner.push_back(0);
          }
          outer.push_back(inner);
          inner.clear();
      }
      
      if((maxi-mini)>k)
      cout<<"NO\n";
      else
      {
          for(int i=0;i<=mini;i++)
          {
              for(int j=0;j<n;j++)
              {
                  if(i<outer[j].size())
                  outer[j][i]=1;
              }
          }
          int temp=2;
          for(int i=mini+1;i<maxi;i++)
          {
             if(temp>k)
             {
                 cout<<"NO\n";
                 return 0;
             }
              for(int j=0;j<n;j++)
              {
                  if(i<outer[j].size())
                  outer[j][i]=temp;
              }
              temp++;
              
          }
          cout<<"YES\n";
          for(auto it:outer)
          {
              for(auto ip:it)
              {
                  cout<<ip<<" ";
              }
              cout<<"\n";
          }
      }
}



     
