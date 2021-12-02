Link for Ques:
https://practice.geeksforgeeks.org/problems/maximum-product-subarray3604/1#


#include <bits/stdc++.h>

using namespace std;

 // } Driver Code Ends
//User function template for C++
class Solution{
public:

	// Function to find maximum product subarray
	long long int max(long long int a,long long int b)
	{
	       return (a>b?a:b) ;
	}
		long long int min(long long int a,long long int b)
	{
	       return (a>b?b:a) ;
	}
	
	
	
	long long maxProduct(vector<int> arr, int n) {
	    
	    
	    // code her
	    long long  int maxii=arr[0];
	     long long int mini=arr[0];
	     
	     long long int ans=arr[0];
	     for(int i=1;i<n;i++)
	     {
	          if(arr[i]<0)
	            {
	               swap(maxii,mini);
	            }
	            
	            maxii=max(arr[i],maxii*1LL*arr[i]);
	            mini=min(arr[i],mini*1LL*arr[i]);
	            ans=max(maxii,max(mini,ans));
	            
	            
	     }
	     return ans;
	     
	     
	}
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        vector<int> arr(n);
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.maxProduct(arr, n);
        cout << ans << "\n";
    }
    return 0;
}  // } Driver Code Ends
