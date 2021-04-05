Link For Ques:
https://practice.geeksforgeeks.org/problems/max-distance-between-same-elements/1/?category[]=Mathematical&category[]=Arrays&category[]=Strings&category[]=Mathematical&category[]=Arrays&category[]=Strings&problemStatus=unsolved&problemType=functional&page=1&sortBy=submissions&query=category[]Mathematicalcategory[]Arrayscategory[]StringsproblemStatusunsolvedproblemTypefunctionalpage1sortBysubmissionscategory[]Mathematicalcategory[]Arrayscategory[]Strings

#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
    public:
    // your task is to complete this function
    int maxDistance(int arr[], int n)
    {
        unordered_map<int,vector<int>>umap;
          for(int i=0;i<n;i++)
          {
                umap[arr[i]].push_back(i);
          }
          int maxii=0;
          for(auto it:umap)
          {
              auto ip=it.second;
              maxii=max((ip.back()-ip.front()),maxii);
          }
          return maxii;
          
    //Code here
    }
};

// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];
        Solution ob;
        cout<<ob.maxDistance(arr,n)<<endl;
    }
    return 0;
}  // } Driver Code Ends
