Link for Ques:
https://codeforces.com/contest/1625/problem/A


#include<bits/stdc++.h>
using namespace std;


int main()
{
    int t;
    cin>>t;

   
    while(t--)
    {
         int n,k;
         cin>>n>>k;
         int arr[n]{0};
         for(int i=0;i<n;i++)
         {
               cin>>arr[i];
         }
         
         vector<int>v(k,0);
         
         while(k)
         {   int o=0,z=0;
            bool flag=true;
             for(int i=n-1;i>=0;i--)
             {      
                    int x=arr[i]%2;
                    arr[i]=arr[i]/2;
                    if(arr[i]>0)
                     {
                         flag=false;
                     }
                      if(x)
                       o++;
                       else
                       z++;
             }
            // cout<<z<<" "<<o<<endl;
           
             v[k-1]=(z>o?0:1);
             k--;
               if(flag)
             break;
         }
         int ans=0,j=0;
         for(int i=v.size()-1;i>=0;i--)
         {
            ans+=(pow(2,j++)*1LL*v[i]);
            //cout<<v[i]<<" ";
         }
         cout<<ans<<endl;
        
    }
       
    
   
}
