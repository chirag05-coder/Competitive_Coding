Link for Ques:
https://codeforces.com/contest/34/problem/A


#include<bits/stdc++.h>
#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
//#define lli long long int
using namespace std;
const long long int mod=1e9+7;


signed main()
{    fastio;

        
         
        int n;
        cin>>n;
        int arr[n]{0};
        for(int i=0;i<n;i++)
          {
                cin>>arr[i];
          }
          vector<int>v;
          for(int i=0;i<n-1;i++)
          {
          
              v.push_back(abs(arr[i]-arr[i+1]));
          }
          v.push_back(abs(arr[n-1]-arr[0]));
          
          int x= min_element(v.begin(),v.end())-v.begin();
          
          if(x==n-1)
          {
               cout<<x+1<<" "<<1<<endl;
          }
          else
          {
              cout<<x+1<<" "<<x+2<<endl;
          }
          
                
                 
       
}



     
