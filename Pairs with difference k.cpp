Link for Ques:
https://practice.geeksforgeeks.org/problems/pairs-with-difference-k1713/1#



#include <bits/stdc++.h>

using namespace std;

 // } Driver Code Ends
//User function template for C++
class Solution{
public:
	
	/* Returns count of pairs with difference k in arr[] of size n. */
	int countPairsWithDiffK(int arr[], int n, int k) {
	    
	    unordered_map<int,int>umap;
	    for(int i=0;i<n;i++)
	    {
	           umap[arr[i]]++;
	    }
	     
	      int cnt=0;
	      for(int i=0;i<n;i++)
	      {
	              if(umap.find(arr[i]+k)!=umap.end())
	                 {   if(arr[i]+k==arr[i])
	                      { cnt+=umap[arr[i]+k]-1;
	                           umap[arr[i]+k]--;
	                      }
	                       else
	                     cnt+=umap[arr[i]+k];
	                
	    // code here
	                 }
	       }
	       return cnt;
	}
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i, k;
        cin >> n >> k;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.countPairsWithDiffK(arr, n, k);
        cout << ans << "\n";
    }
    return 0;
}
  // } Driver Code Ends
