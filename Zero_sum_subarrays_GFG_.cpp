Link for Ques:
https://practice.geeksforgeeks.org/problems/zero-sum-subarrays1825/1#


//Initial function template for C++

#include<bits/stdc++.h>
using namespace std;
#define ll long long

 // } Driver Code Ends
//User function template for C++

class Solution{
    public:
    //Function to count subarrays with sum equal to 0.
    ll findSubarray(vector<ll> arr, int n ) {
        //code here
        unordered_map<int,int>umap;
    int  pref=0,cnt=0;
        for(auto it:arr)
        {
              pref=pref+ it;
              //cout<<pref<<endl;
              if(pref==0)
              { 
                  cnt++;
              } 
            //   else
            //   {
            //  if(it!=0)
              umap[pref]++;
            //   else
            //   {
            //       umap[it]++;
            //   }
            //   }
        }
        for(auto it:umap)
        {  // cout<<it.first<<" "<<it.second<<endl;
              if(it.second>1)
              {
                    cnt+=((it.second)*(it.second-1))/2;
              }
        }
        return cnt;
        
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
        cin>>n; //input size of array
       
        vector<ll> arr(n,0);
        
        for(int i=0;i<n;i++)
            cin>>arr[i]; //input array elements
        Solution ob;
        cout << ob.findSubarray(arr,n) << "\n";
    }
	return 0;
}  // } Driver Code Ends
