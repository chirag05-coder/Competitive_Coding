Link for Ques:
https://practice.geeksforgeeks.org/problems/find-duplicates-in-an-array/1/?problemStatus=unsolved&problemType=functional&page=1&sortBy=submissions&category[]=Arrays&category[]=Strings&category[]=Hash&category[]=sliding-window&query=problemStatusunsolvedproblemTypefunctionalpage1sortBysubmissionscategory[]Arrayscategory[]Stringscategory[]Hashcategory[]sliding-window#


#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution{
  public:
    vector<int> duplicates(int arr[], int n) {
        // code here
        vector<int>v;
        for(int i=0;i<n;i++)
          {v.push_back(arr[i]);
            arr[i]=0;
              
          }
         for(auto it:v)
         {
             arr[it]++;
         }
         v.clear();
         for(int i=0;i<n;i++)
         {
             if(arr[i]>1)
                v.push_back(i);
         }
         if(v.size()==0)
            v.push_back(-1);
         return v;
    }
};


// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        Solution obj;
        vector<int> ans = obj.duplicates(a, n);
        for (int i : ans) cout << i << ' ';
        cout << endl;
    }
    return 0;
}
  // } Driver Code Ends
