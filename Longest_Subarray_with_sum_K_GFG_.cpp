Link for Ques:
https://practice.geeksforgeeks.org/problems/longest-sub-array-with-sum-k0809/1#





 // } Driver Code Ends

class Solution{
    public:
    int lenOfLongSubarr(int arr[],  int n, int K) 
    { 
       
        unordered_map<int,int>umap;
          int pre=0,len=0;
          for(int i=0;i<n;i++)
          {
              pre+=arr[i];
              if(pre==K)
              {
                   
                  len=max(len,i+1);
              }
          
              if(umap.find(pre-K)!=umap.end())
                {   
                    
                    len=max(len,i-umap[pre-K]);
                }
                   if(umap.find(pre)==umap.end())
                    umap[pre]=i;
               
                
              
          }
        return len;
        
   
    } 

};

// { Driver Code Starts.

int main() {
	//code
	
	int t;cin>>t;
	while(t--)
	{
	    int n, k;
	    cin>> n >> k;
	    int a[n];
	    
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	   Solution ob;
	   cout << ob.lenOfLongSubarr(a, n , k)<< endl;
	    
	}
	
	return 0;
}  // } Driver Code Ends
