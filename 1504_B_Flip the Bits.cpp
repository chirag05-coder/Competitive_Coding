Link for Ques:
https://codeforces.com/contest/1504/problem/B


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
          
                int t;
                cin>>t;
                while(t--)
                {
                     
                        int  n;
                        cin>>n;
                       string a,b;
                       cin>>a>>b;
                      // int flips=0;
                      bool flag=true;
                       vector<pair<int,int>>v;
                       int z=0,o=0;
                       for(int i=0;i<n;i++)
                       {
                              char ch=a.at(i);
                              //char ch1=b.at(i);
                                ch=='0'?z++:o++;
                                
                                v.push_back({z,o});
                          
                       }
                    //   for(auto it:v)
                    //   {
                    //          cout<<it.first<<" "<<it.second<<endl;
                    //   }
                       int flips=0;
                       for(int i=n-1;i>=0;i--)
                       {
                              char ch=a.at(i);
                              char ch1=b.at(i);
                              if(flips&1)
                              {
                                    if(ch=='0')
                                                   ch='1';
                                                   else
                                                   ch='0';
                              }
                              if(ch!=ch1)
                              {
                                    if(v[i].first==v[i].second)
                                     {    if(flips)
                                          {
                                            if(flips&1)
                                              swap(v[i].first,v[i].second);
                                          }
                                          flips++;
                                     }
                                     
                                     else
                                     {   
                                           if(ch!=ch1)
                                            { 
                                         flag=false;
                                         cout<<"NO"<<endl;
                                         break;
                                            }
                                     }
                              }
                       }
                       if(flag)
                         cout<<"YES"<<endl;
                         
                }
          
          
          
    }




     
