Link for QUes:
https://leetcode.com/problems/climbing-stairs/


class Solution {
public:
    
    int ways(int n,int i,int dp[])
    {
           if(i>n)
               return 0;
           if(i==n)
               return 1;
           if(dp[i]!=0)
               return dp[i];
        
             int x=ways(n,i+1,dp)+ways(n,i+2,dp);
              return dp[i]=x;
    }
    int climbStairs(int n) {
           int dp[n+1];
        for(int i=0;i<=n;i++)
             dp[i]=0;
          return  ways(n,0,dp);
          
    }
};
