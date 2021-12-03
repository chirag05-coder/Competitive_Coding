Link for Ques:
https://practice.geeksforgeeks.org/problems/maximum-sum-increasing-subsequence4749/1#


#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
		

	public:
	int maxSumIS(int arr[], int n)  
	{  
	    // Your code goes here
	    
	    int dp[n+1]{0};
	    
	    for(int i=0;i<n;i++)
	    {   dp[i]=arr[i];
	        for(int j=i-1;j>=0;j--)
	         {
	               
	                if(arr[i]>arr[j])
	                 {
	                     dp[i]=max(dp[i],dp[j]+arr[i]);
	                 }
	                 
	         }
	    }
	    return *max_element(dp,dp+n+1);
	}  
};

// { Driver Code Starts.
int main() 
{
   	
   
   	int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int a[n];

        for(int i = 0; i < n; i++)
        	cin >> a[i];

      

	    Solution ob;
	    cout << ob.maxSumIS(a, n) << "\n";
	     
    }
    return 0;
}

  // } Driver Code Ends
