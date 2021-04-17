Link for Ques:
https://practice.geeksforgeeks.org/problems/non-repeating-element3958/1


#include <iostream>
#include <bits/stdc++.h>
using namespace std;
 

 // } Driver Code Ends


class Solution{
    public:
    int firstNonRepeating(int arr[], int n) 
    { 
        // Complete the function
        unordered_map<int,int>umap;
        unordered_map<int,int>u;
        for(int i=0;i<n;i++)
        {
            umap[arr[i]]++;
            u[arr[i]]=i;
        }
        int mini=INT_MAX;
        for(auto it:umap)
        {
            if(it.second==1)
            {
                int x=u[it.first];
                mini=min(mini,x);
            }
        }
        return arr[mini];
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
        for (int i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        Solution ob;
        cout<<ob.firstNonRepeating(arr,n)<<endl;
    }
}
  // } Driver Code Ends
