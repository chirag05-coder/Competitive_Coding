Link for Ques:
https://codeforces.com/contest/681/problem/C


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
     
         int n;
         cin>>n;
         vector<pair<string,int>>v;
           unordered_map<string, priority_queue<int, vector<int>, greater<int>>>umap;
           int x;
         for(int i=0;i<n;i++)
         {
             string s;
             cin>>s;
             if(s=="removeMin")
             x=0;
             else
             cin>>x;
             
             v.push_back({s,x});
            
             
         }
         vector<pair<string,int>>ans;
         for(int i=0;i<n;i++)
         {   if(v[i].first=="removeMin")
               {
                      if(umap["insert"].size())
                       {
                             umap["insert"].pop();
                             ans.push_back({"removeMin",0});
                       }
                       else
                       {
                             ans.push_back({"insert",0});
                              ans.push_back({"removeMin",0});
                       }
               }
              else if(v[i].first=="getMin")
               {     
                   
                   int x=v[i].second;
                    while(!umap["insert"].empty() and x>umap["insert"].top())
                      {
                              umap["insert"].pop();
                              ans.push_back({"removeMin",0});
                      }
                      
                      if(umap["insert"].empty() or umap["insert"].top()>x)
                        {
                               umap["insert"].push(x);
                               ans.push_back({"insert",x});
                        }
                        ans.push_back({v[i].first,x});
                    //  if(umap["insert"].size()>0 and umap["insert"].top()==v[i].second)
                    //   { //cout<<"two"<<endl;
                    //           ans.push_back({v[i].first,v[i].second});
                              
                    //   }
                    //   else
                    //   {  // cout<<"three"<<endl;
                    //         bool flag=false;
                    //       while(!umap["insert"].empty())
                    //          {
                    //              if(umap["insert"].top()>v[i].second)
                    //               {      flag=true;
                    //                       if(umap["insert"].top()>v[i].second)
                    //                       {umap["insert"].push(v[i].second);
                    //                             ans.push_back({"insert",v[i].second});}
                    //                             ans.push_back({v[i].first,v[i].second});
                    //                               break;
                                          
                    //               }
                    //               else if(umap["insert"].top()<v[i].second)
                    //               {   ans.push_back({"removeMin",0});
                    //                   umap["insert"].pop();  
                    //               }
                    //          }
                    //          if(flag==false)
                    //          { //  cout<<"four"<<endl;
                    //              umap["insert"].push(v[i].second);
                    //              ans.push_back({"insert",v[i].second});
                    //               ans.push_back({v[i].first,v[i].second});
                    //               if(v[i].first=="removeMin")
                    //                                  umap["insert"].pop();
                    //          }
                    //   }
               }
               else
               {   umap["insert"].push(v[i].second);
                   ans.push_back({"insert",v[i].second});
               }
         }
         cout<<ans.size()<<endl;
         for(auto it:ans)
         {  if(it.first!="removeMin")
             cout<<it.first<<" "<<it.second<<endl;
             else
             cout<<it.first<<endl;
         }
         
        
           
           
           
    }




     
