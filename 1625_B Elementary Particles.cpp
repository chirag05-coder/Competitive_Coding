Link for Ques:
https://codeforces.com/contest/1625/problem/B



#include<bits/stdc++.h>
using namespace std;


int main()
{
    int t;
    cin>>t;
    int count=0;
   
    while(t--)
    {
         int n;
         cin>>n;
         int arr[n]{0};
          int len1=0;
         unordered_map<int,vector<int>>umap;
         set<int>st;
         for(int i=0;i<n;i++)
           {
                cin>>arr[i];
                umap[arr[i]].push_back(i);
           }
           for(int i=0;i<n-1;i++)
           {
                  if(arr[i]==arr[i+1])
                    {
                         len1=n-1;
                    }
           }
           if(umap.size()==n)
           {
                 cout<<"-1"<<endl;
           }
           else if(umap.size()==1)
           {
                   cout<<n-1<<endl;
           }
           else
           {        int mid=n/2;
                    int ele;
                    int idx=0,idx1=INT_MAX;
                   
                    for(auto it:umap)
                    {
                        vector<int>vv=it.second;
                        for(int i=1;i<vv.size();i++)
                              {
                                    st.insert(n-(vv[i]-vv[i-1]));
                              }
                    }
           
           
                  cout<<max(len1,(*st.rbegin()))<<endl;
           }
        
    }
       
    
   
}
