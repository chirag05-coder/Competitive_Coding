Link for Ques:
https://practice.geeksforgeeks.org/problems/minimize-the-heights3351/1/?problemStatus=unsolved&problemType=functional&page=1&sortBy=submissions&category[]=Arrays&category[]=Strings&category[]=Hash&category[]=sliding-window&query=problemStatusunsolvedproblemTypefunctionalpage1sortBysubmissionscategory[]Arrayscategory[]Stringscategory[]Hashcategory[]sliding-window#

// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function template for C++

class Solution {
  public:
    int getMinDiff(int arr[], int n, int k) {
        // code here
        sort(arr,arr+n);
        int x,y,mini=INT_MAX;
        // set<int>st;
        // for(int i=0;i<n;i++)
        // {    if(arr[i]-k>0)
        //       { x=i;
        //           break;
        //       }
        //       arr[i]+=k;
        //       st.insert(arr[i]);
            
        // }
        
        int ans =arr[n-1]-arr[0];
        for(int i=0;i<n;i++)
        {
            if(arr[i]>=k)
            {
                x=min(arr[0]+k,arr[i]-k);
                y=max(arr[n-1]-k,arr[i-1]+k);
                ans=min(ans,(y-x));                
            }
        }
        return ans;
     
        
        
       
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> k;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.getMinDiff(arr, n, k);
        cout << ans << "\n";
    }
    return 0;
}  // } Driver Code Ends
