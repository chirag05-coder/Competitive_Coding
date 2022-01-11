Link for Ques:
https://codeforces.com/problemset/problem/1624/C



#include<bits/stdc++.h>
using namespace std;
int main()
{
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
                 umap[i+1]=0;
           }
           sort(arr,arr+n);
           for(int i=n-1;i>=0;i--)
            {
                   int x=arr[i];
                   while(x>=1)
                   {
                         if(x<=n and umap[x]==0)
                          {
                              umap[x]++;
                              break;
                          }
                          x/=2;
                          
                          
                   }
            }
            // for(auto it:umap)
            // {
            //       cout<<it.first<<" "<<it.second<<endl;
            // }
            bool flag=true;
            for(auto it:umap)
            {
                  if(it.second==0)
                  {
                        cout<<"NO"<<endl;
                        flag=false;
                        break;
                  }
                
            }
            if(flag)
            cout<<"YES"<<endl;
    }
}
