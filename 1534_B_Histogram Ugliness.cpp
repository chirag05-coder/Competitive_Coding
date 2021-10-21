Link for Ques:
https://codeforces.com/contest/1534/problem/B



#include<bits/stdc++.h>
#define endl "\n"
#define int  long long int
using namespace std;


signed main()
{  
        int t;
        cin>>t;
        while(t--)
        {
               int n;
               cin>>n;
               int arr[n]{0};
               for(int i=0;i<n;i++)
               {
               
                       cin>>arr[i];
               }
               if(n==1)
               {
                   cout<<arr[0]<<endl;
               }
               else
               {
               int cnt=0;
               if(arr[0]>arr[1])
               {
                     cnt+=(arr[0]-arr[1]);
                     arr[0]=arr[1];
               }
               for(int i=1;i<n-1;i++)
               {
                      if(arr[i]>arr[i-1] and arr[i]>arr[i+1])
                       {
                            int maxii=max(arr[i-1],arr[i+1]);
                             cnt+=(arr[i]-maxii);
                             arr[i]=maxii;
                       }
                   
               }
               if(arr[n-1]>arr[n-2])
               {
                   cnt+=(arr[n-1]-arr[n-2]);
                     arr[n-1]=arr[n-2];
               }
               int ans=arr[0];
               for(int i=1;i<n;i++)
               {
                     ans+=(abs(arr[i]-arr[i-1]));
               }
               ans+=arr[n-1]+cnt;
               cout<<ans<<endl;
               }
               
            
             
        }
}



     
