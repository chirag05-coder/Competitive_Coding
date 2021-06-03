Link for Ques:
https://practice.geeksforgeeks.org/problems/longest-consecutive-subsequence2449/1#


#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
  public:
    // arr[] : the input array
    // N : size of the array arr[]
    
    //Function to return length of longest subsequence of consecutive integers.
    int findLongestConseqSubseq(int arr[], int n)
    {
      //Your code here
      unordered_map<int,int>umap;
      for(int i=0;i<n;i++)
      {     if(umap.find(arr[i])==umap.end())
          {
            if(umap.find(arr[i]-1)!=umap.end() and umap.find(arr[i]+1)!=umap.end())
            {   int len1=umap[arr[i]-1];
                 int len2=umap[arr[i]+1];
                 int streak=len1+len2+1;
                 umap[arr[i]-len1]=streak;
                 umap[arr[i]+len2]=streak;
                 umap[arr[i]]=len1+1;
                
            }
            else if(umap.find(arr[i]-1)!=umap.end() and umap.find(arr[i]+1)==umap.end())
            {   int len=umap[arr[i]-1];
            umap[arr[i]-len]=len+1;
                 umap[arr[i]]=len+1;
              
            }
            else if(umap.find(arr[i]-1)==umap.end() and umap.find(arr[i]+1)!=umap.end())
            {    int len=umap[arr[i]+1];
                 umap[arr[i]+len]=len+1;
                 umap[arr[i]]=len+1;
                  
                
            }
            else
            {
                umap[arr[i]]=1;
            }
          }
         
          
      }
       int largest=0;
      for(auto it:umap)
      {
           largest=max(largest,it.second);
      }
      return largest;
    }
};

// { Driver Code Starts.
 
// Driver program
int main()
{
 int  t,n,i,a[100001];
 cin>>t;
 while(t--)
 {
  cin>>n;
  for(i=0;i<n;i++)
  cin>>a[i];
  Solution obj;
  cout<<obj.findLongestConseqSubseq(a, n)<<endl;
 }
      
    return 0;
}  // } Driver Code Ends
