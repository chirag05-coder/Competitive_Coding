Link for Ques:
https://codeforces.com/contest/1335/problem/C


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
bool cmp(pair<int,int>a,pair<int,int>b)
{
        return abs(a.first-a.second)>abs(b.first-b.second);
}
signed main()
{    fastio;
      int t;
      cin>>t;
      while(t--)
      {
          int n;
          cin>>n;
         int arr[n]{0};
         unordered_map<int,int>umap;
         for(int i=0;i<n;i++)
         {
              cin>>arr[i];
              umap[arr[i]]++;
         }
         sort(arr,arr+n);
         
         int maxii=INT_MIN;
         int ele;
         for(auto it:umap)
         {
                if(it.second>maxii)
                {
                    maxii=it.second;
                    ele=it.first;
                }
         }
         if(maxii==1 and n>=2)
         {
             cout<<"1"<<endl;
         }
         else if(n==1)
          {
              cout<<"0"<<endl;
          }
          else
          {
              umap.erase(ele);
              if(umap.size()>=maxii)
               {
                   cout<<maxii<<endl;
               }
               else
               {   if(maxii-1==umap.size())
                     cout<<umap.size()<<endl;
                //      else if(maxii-1==umap.size()+1)
                //   cout<<umap.size()+1<<endl;
                   else
                   cout<<umap.size()+1<<endl;
               }
          }
         
         
      }
           
    }




     
