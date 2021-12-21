Link for Ques:
https://codeforces.com/contest/1620/problem/B


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
      int t;
     cin>>t;
    while(t--){
           int w,h;
           cin>>w>>h;
           
           vector<int>x,x_up,y,y_aage;
           int nn=4;
           int cnt=0;
           while(nn--)
           {
               int k;
               cin>>k;
               int val;
               cnt++;
               while(k--)
               {
                  cin>>val;
                  if(cnt==1)
                  {
                      x.push_back(val);
                  }
                  else if(cnt==2)
                  {
                      x_up.push_back(val);
                  }
                   else if(cnt==3)
                  {
                      y.push_back(val);
                  }
                  else
                  y_aage.push_back(val);
               }
           }
           int ans=0;
            int ans1=(x.back()-x.front())*1LL*h;
            int ans2=(x_up.back()-x_up.front())*1LL*h;
            int ans3=(y.back()-y.front())*1LL*w;
            int ans4=(y_aage.back()-y_aage.front())*1LL*w;
            
            cout<<max(max(ans1,ans2),max(ans3,ans4))<<endl;
           
           
    }
}




     
