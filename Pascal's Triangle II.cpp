Link for Ques:
https://leetcode.com/problems/pascals-triangle-ii/


class Solution {
public:
    vector<int> getRow(int n) {
          int dp[n+1][n+1];
        for(int i=0;i<=n;i++)
        {    dp[i][0]=1;
             for(int j=1;j<=n;j++)
             {
                 if(i==j)
                     dp[i][j]=1;
                 else
                     dp[i][j]=0;
             }
        }
        
    for(int i=2;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(dp[i][j]==1)
                  break;
            else
                dp[i][j]=dp[i-1][j-1]+dp[i-1][j];
        }
    }
        
    vector<vector<int>>v;
         for(int i=0;i<=n;i++)
    {   vector<int>temp;
          
        for(int j=0;j<=n;j++)
        {
            if(dp[i][j]==0)
                  break;
             temp.push_back(dp[i][j]);
        }
     v.push_back(temp);
    }
        return v[n];
        
    }
};
