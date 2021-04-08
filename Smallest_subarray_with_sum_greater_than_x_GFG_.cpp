Link For Ques:
https://practice.geeksforgeeks.org/problems/smallest-subarray-with-sum-greater-than-x5651/1#



#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


class Solution{
  public:

    int sb(int arr[], int n, int x)
    {
        // Your code goes here 
        int sum=0,k=0,len=0,mini=INT_MAX;
        for(int i=0;i<n;i++)
        {  
            sum+=arr[i];
            len++;
            
            
            
            if(sum>x)
            {   
                int temp=sum,length=len;
                while(sum-arr[k]>x)
                {  sum-=arr[k];
                    len--;
                    k++;
                }
               
                mini=min(len,mini);
               // k=0;
              
                
            }
            
        }
        return mini;
    }
};

// { Driver Code Starts.

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
		int n,x;
		cin>>n>>x;
		int a[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
		Solution obj;
		cout<<obj.sb(a,n,x)<<endl;
	}
	return 0;
}  // } Driver Code Ends
