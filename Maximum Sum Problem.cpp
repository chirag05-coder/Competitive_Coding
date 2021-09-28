Link for Ques:
https://practice.geeksforgeeks.org/problems/maximum-sum-problem2211/1/?category[]=Dynamic%20Programming&category[]=Dynamic%20Programming&difficulty[]=-2&difficulty[]=-1&difficulty[]=0&page=1&query=category[]Dynamic%20Programmingdifficulty[]-2difficulty[]-1difficulty[]0page1category[]Dynamic%20Programming#


#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
    public:
     
        int dp[1000000+1]{0};
        
        int sum(int n,int ans)
         {
                  if( n<=1)
                 return n;
             if(dp[n]!=0)
             {  return dp[n];
             }  
              int x=sum(n/2,ans);
              
              int y=sum(n/3,ans);
              int z=sum(n/4,ans);
              
              ans=max(ans,x+y+z);
            return dp[n]=max(ans,n);
            
         }
         
        int maxSum(int n)
        {
             int ans=0;
            return sum(n,ans);
            
            //code here.
            
              
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
        cin>>n;
        Solution ob;
        cout<<ob.maxSum(n)<<"\n";
    }
    return 0;
}  // } Driver Code Ends
