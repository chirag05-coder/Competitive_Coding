Link For Ques:
https://practice.geeksforgeeks.org/problems/counting-elements-in-two-arrays/1

// C++ implementation of For each element in 1st 
// array count elements less than or equal to it
// in 2nd array
#include <bits/stdc++.h>
 
using namespace std;


 // } Driver Code Ends
// function to count for each element in 1st array,
// elements less than or equal to it in 2nd array
class Solution{
  public:
    vector<int> countEleLessThanOrEqual(int arr1[], int arr2[], 
                                 int m, int n)
    {
    //Your code goes here
    vector<int>v;
          sort(arr2,arr2+n);
          int start=0;
          int end=n-1;
          int mid=0;
          int pos=0;
          for(int i=0;i<m;i++)
          {
               if(arr1[i]>=arr2[n-1])
               v.push_back(n);
               else
               {
              while(start<=end)
              {
                  mid=(start+end)/2;
                  if(arr2[mid]>arr1[i])
                  {
                      pos=mid;
                      end=mid-1;
                  }
                  else if(arr2[mid]<=arr1[i])
                   start=mid+1;
              }
             
              v.push_back(pos);
              start=0;
              end=n-1;
               }
             
          }
          return v;
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int m,n;
        cin>>m>>n;
        int arr1[m],arr2[n];
        for(int i=0;i<m;i++)
        cin>>arr1[i];
        for(int j=0;j<n;j++)
        cin>>arr2[j];
        Solution obj;
        vector <int> res = obj.countEleLessThanOrEqual(arr1, arr2, m, n);
        for (int i = 0; i < res.size (); i++) cout << res[i] << " ";
        
        cout<<endl;
    }
    return 0;
}  // } Driver Code Ends
