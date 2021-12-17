Link for Ques:
https://codeforces.com/contest/1617/problem/C


#include<bits/stdc++.h>
#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long int
using namespace std;
const int M=1e9+7;


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
         int n;
         cin>>n;
         set<int>st;
         for(int i=1;i<=n;i++)
           st.insert(i);
           int arr[n]{0};
           vector<int>v;
           for(int i=0;i<n;i++)
           {
           
               cin>>arr[i];
               if(st.find(arr[i])!=st.end())
                   st.erase(arr[i]);
                   else
                   v.push_back(arr[i]);
           }
           
           sort(v.begin(),v.end());
           int cnt=0;
           int i=0;
           bool flag=true;
           auto it=st.begin();
           for(int i=0;i<v.size();i++)
            {
                if((ceil(v[i]/(2*1.0))-1)<(*it))
                 {  flag=false;
                     break;
                 }
                 else
                 {
                     cnt++;
                     
                 }
                 it++;
            }
            if(flag)
            cout<<cnt<<endl;
            else
            cout<<"-1"<<endl;
           
         
            }
           
    }




     
