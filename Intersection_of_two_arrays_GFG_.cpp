Link For Ques:
https://practice.geeksforgeeks.org/problems/intersection-of-two-arrays2404/1


//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution{
    public:
    //Function to return the count of the number of elements in
    //the intersection of two arrays.
    int NumberofElementsInIntersection (int a[], int b[], int n, int m )
    {
        // Your code goes here
        unordered_map<int,int>umap;
        for(int i=0;i<n;i++)
        {
            umap[a[i]]++;
        }
        int cnt=0;
        for(int i=0;i<m;i++)
        {
            if(umap.find(b[i])!=umap.end())
            {    cnt++;
               // umap[b[i]]--;
                 
            
                     umap.erase(b[i]);
                 
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
		int n,m;
		cin>>n>>m;
		int a[n], b[m];
		for(int i=0; i<n; i++)
			cin>>a[i];

		for(int i=0; i<m; i++)
			cin>>b[i];
		Solution ob;
		cout << ob.NumberofElementsInIntersection(a,b,n,m) << endl;
	}
	return 0;
}  // } Driver Code Ends
