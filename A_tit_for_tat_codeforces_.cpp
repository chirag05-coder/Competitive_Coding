Link for Ques:
https://codeforces.com/contest/1516/problem/A


#include<bits/stdc++.h>
#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define lli long long int

using namespace std;
int main()
{  fastio;
  int t;
  cin>>t;
  while(t--)
  {
       
       int n,k;
       cin>>n>>k;
       int arr[n];
       for(int i=0;i<n;i++)
          cin>>arr[i];
       int s=0,l=n-1;
       int z_cnt=0;
       
       for(int i=0; i<n and arr[i]==0;i++)
       {
           z_cnt++;
       }
       //cout<<z_cnt<<"\n";
       s=z_cnt;
     
     
       
       while(k-- and s<l)
       {
           if(arr[s]>0 )
           {
               arr[s]--;
               arr[l]++;
               
           }
         
           if(arr[s]==0)
           {
              s++;
           //   arr[s]--;
           //   arr[l]++;
           }
           
       }
       for(int i=0;i<n;i++)
       cout<<arr[i]<<" ";
       cout<<"\n";
       
       
   }

   


}
