Link for Ques:
https://codeforces.com/contest/158/problem/B


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
     
         
       int n;
       cin>>n;
       int arr[n]{0};
       unordered_map<int,int>umap,temp;
       for(int i=0;i<n;i++)
       {
           cin>>arr[i];
           umap[arr[i]]++;
           temp[arr[i]]++;
       }
       sort(arr,arr+n);
       int ans=0,car=4;
       int cnt=0;
       
       for(int i=0;i<n;i++)
       {   if(umap[arr[i]]<=0)
              continue;
           int j=i;
           while(car>=arr[j])
            {
                car-=arr[j];
                
                cnt++;
                temp[arr[j]]--;
                j++;
              
            }
           
             if(umap.find(4-arr[i])!=umap.end() and umap[arr[i]]>0 and umap[4-arr[i]]>0)
             {
             
                 ans++;
                 umap[arr[i]]--;
                 umap[4-arr[i]]--;
                 temp=umap;
                 
             }
             else if(cnt>=2)
            {
                ans++;
                car=4;
                umap=temp;
                i=j-1;
            }
             else
             {
                 ans++;
                 umap[arr[i]]--;
                 temp[arr[i]]--;
             }
             car=4;
             cnt=0;
             
             
             
       }
       umap.clear();
       temp.clear();
       
         int ans1=ans;
         ans=0;
         cnt=0;
         car=4;
         for(int i=0;i<n;i++)
       {
           
           umap[arr[i]]++;
           temp[arr[i]]++;
       }
       
        for(int i=0;i<n;i++)
       {   if(umap[arr[i]]<=0)
              continue;
           int j=i;
           while(car>=arr[j])
            {
                car-=arr[j];
                
                cnt++;
                temp[arr[j]]--;
                j++;
              
            }
           
               if(cnt>=2)
            {
                ans++;
                car=4;
                umap=temp;
                i=j-1;
            }
             else if(umap.find(4-arr[i])!=umap.end() and umap[arr[i]]>0 and umap[4-arr[i]]>0)
             {
             
                 ans++;
                 umap[arr[i]]--;
                 umap[4-arr[i]]--;
                 temp=umap;
                 
             }
          
             else
             {
                 ans++;
                 umap[arr[i]]--;
                 temp[arr[i]]--;
             }
             car=4;
             cnt=0;
             
             
             
       }
         if(cnt>2)
            {
                ans++;
                car=4;
                umap=temp;
               // i=j-1;
            }
       cout<<min(ans,ans1)<<endl;
       
       
           
    
}




     
