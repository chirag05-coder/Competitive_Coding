Link for Ques:
https://practice.geeksforgeeks.org/problems/maximum-of-all-subarrays-of-size-k3101/1/?problemStatus=unsolved&problemType=functional&page=1&sortBy=submissions&category[]=sliding-window&query=problemStatusunsolvedproblemTypefunctionalpage1sortBysubmissionscategory[]sliding-window

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


class Solution{
    public:
        vector <int> max_of_subarrays(int *arr, int n, int k){
        // your code here
        deque<int>dq;
        vector<int>v;
        int j=0,i=0;
        while(j<n)
        {
            while( !dq.empty() and arr[j]>dq.back())
            {
                dq.pop_back();
            }
            dq.push_back(arr[j]);
            
            if(j-i+1==k)
            {    
                
                v.push_back(dq.front());
                if(dq.front()==arr[i])
            {
                dq.pop_front();
            }
           
                
              j++;
              i++;
            }
            if(j-i+1<k)
            {
                j++;
            }
        }
        return v;
    }
};

// { Driver Code Starts.

int main() {
	
	int t;
	cin >> t;
	
	while(t--){
	    
	    int n, k;
	    cin >> n >> k;
	    
	    int arr[n];
	    for(int i = 0;i<n;i++) 
	        cin >> arr[i];
	    Solution ob;
	    vector <int> res = ob.max_of_subarrays(arr, n, k);
	    for (int i = 0; i < res.size (); i++) 
	        cout << res[i] << " ";
	    cout << endl;
	    
	}
	
	return 0;
}  // } Driver Code Ends
