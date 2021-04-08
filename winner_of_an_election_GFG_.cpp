Link For Ques:
https://practice.geeksforgeeks.org/problems/winner-of-an-election-where-votes-are-represented-as-candidate-names-1587115621/1/?category[]=Hash&category[]=Hash&problemStatus=unsolved&problemType=functional&page=1&sortBy=submissions&query=category[]HashproblemStatusunsolvedproblemTypefunctionalpage1sortBysubmissionscategory[]Hash



#include <iostream>
#include <map>
#include <algorithm>
#include <cstdlib>
#include<bits/stdc++.h>

using namespace std;


 // } Driver Code Ends


class Solution{
  public:
  
    //Function to return the name of candidate that received maximum votes.
    vector<string> winner(string arr[],int n)
    {       map<string,int>umap;
            vector<string>v;
          for(int i=0;i<n;i++)
          {
              umap[arr[i]]++;
          }
          int maxii=0;
          string res;
           for(auto it:umap)
           {
               if(it.second>maxii)
               {
                   maxii=it.second;
                   res=it.first;
               }
           }
           v.push_back(res);
           v.push_back(to_string(maxii));
          return v;
        // Your code here
        // Return the string containing the name and an integer
        // representing the number of votes the winning candidate got
    }
};

// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    
    for(int i=0;i<t;i++)
    {
        
        
        int n;
        cin>>n;
        
        string arr[n];
        
        for (int i=0;i<n;i++)
        cin>>arr[i];
        Solution obj;
        vector<string> result = obj.winner(arr,n);
        
        cout<<result[0] << " " << result[1] << endl;
    }
    return 0;
}
  // } Driver Code Ends
