Link FOr Ques:
https://practice.geeksforgeeks.org/problems/relative-sorting4323/1#


#include <bits/stdc++.h> 
using namespace std;


 // } Driver Code Ends
//User function template in C++


class Solution{
    public:
    // A1[] : the input array-1
    // N : size of the array A1[]
    // A2[] : the input array-2
    // M : size of the array A2[]
    
    //Function to sort an array according to the other array.
    vector<int> sortA1ByA2(vector<int> arr, int N, vector<int> A2, int M) 
    {
        //Your code here
        int cnt=0;
        unordered_map<int,int>umap;
        for(int i=0;i<N;i++)
        {
            umap[arr[i]]++;
        }
        vector<int>v;
        for(int i=0;i<M;i++)
        {
              if(umap.find(A2[i])!=umap.end())
              {      cnt++;
                    for(int j=0;j<umap[A2[i]];j++)
                     {
                         v.push_back(A2[i]);
                     }
                     umap.erase(A2[i]);
                     
              }
        }
        if(cnt==0)
        {
            sort(arr.begin(),arr.end());
            return arr;
        }
        arr.clear();
          for(auto it:umap)
            { 
                 for(int i=1;i<=it.second;i++)
                     arr.push_back(it.first);
            
                
            }
             
        sort(arr.begin(),arr.end());
        for(auto it:arr)
        {
            v.push_back(it);
        }
        return v;
        
        
    } 
};

// { Driver Code Starts.

int main(int argc, char *argv[]) 
{ 
	
	int t;
	
	cin >> t;
	
	while(t--){
	    
	    int n, m;
	    cin >> n >> m;
	    
	    vector<int> a1(n);
	    vector<int> a2(m);
	    
	    for(int i = 0;i<n;i++){
	        cin >> a1[i];
	    }
	    
	    for(int i = 0;i<m;i++){
	        cin >> a2[i];
	    }
	    
	    Solution ob;
	    a1 = ob.sortA1ByA2(a1, n, a2, m); 
	
	   
	    for (int i = 0; i < n; i++) 
		    cout<<a1[i]<<" ";
		
	    cout << endl;
	    
	    
	}
	return 0; 
} 
  // } Driver Code Ends
