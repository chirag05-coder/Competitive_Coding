Link for Ques:
https://practice.geeksforgeeks.org/problems/count-subarrays-with-equal-number-of-1s-and-0s-1587115620/1


#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


class Solution{
  public:
    //Function to count subarrays with 1s and 0s.
    long long int countSubarrWithEqualZeroAndOne(int arr[], int n)
    {
        //Your code here
        for(int i=0;i<n;i++)
        {
             if(arr[i]==0)
              {
                   arr[i]=-1;
              }
        }
        unordered_map<int,int>umap;
          int sum=0,cnt=0;
        for(int i=0;i<n;i++)
        {   sum+=arr[i];
             if(sum==0)
             {
                  cnt++;
             }
             if(umap.find(sum)!=umap.end())
             {     cnt+=umap[sum];
                  umap[sum]++;
                  
                  
             }
             else
             {
                 umap[sum]++;
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
	int n,i;
	cin>>n;
	int arr[n];
	for(i=0;i<n;i++)
	cin>>arr[i];
	Solution obj;
	cout<< obj.countSubarrWithEqualZeroAndOne(arr, n)<<"\n";
	}
	return 0;
}
  // } Driver Code Ends
