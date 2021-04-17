Link for Ques:
https://practice.geeksforgeeks.org/problems/check-if-array-contains-contiguous-integers-with-duplicates-allowed2046/1/?category[]=Strings&category[]=Hash&category[]=Strings&category[]=Hash&problemStatus=unsolved&problemType=functional&difficulty[]=0&difficulty[]=1&page=1&sortBy=accuracy&query=category[]Stringscategory[]HashproblemStatusunsolvedproblemTypefunctionaldifficulty[]0difficulty[]1page1sortByaccuracycategory[]Stringscategory[]Hash#

// C++ implementation to check whether the array
// contains a set of contiguous integers
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution{
    public:
    // Function to check whether the array contains
    // a set of contiguous integers
    bool areElementsContiguous(int arr[], int n)
    {
	// Complete the function
	map<int,int>umap;
	  for(int i=0;i<n;i++)
	  {
	        umap[arr[i]]++;
	  }
	  auto ip=umap.begin();
	  ip++;
	  auto it=umap.begin();
	  for( ;ip!=umap.end();it++,ip++)
	  {    

	        if((ip->first-it->first)!=1)
	          return false;
	          //ip++;
	  }
	 //if(ip->first-it->first==1)
	  return true;
    }
};

// { Driver Code Starts.
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int n;
        cin>>n;
        int arr[n + 1];
        
        for(int i=0;i<n;i++)
            cin>>arr[i];
        Solution ob;
        if (ob.areElementsContiguous(arr, n))
            cout << "Yes" <<endl;
        else
            cout << "No" <<endl;
    }
	return 0;
}
  // } Driver Code Ends
