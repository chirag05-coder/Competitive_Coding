Link for Ques:
https://leetcode.com/problems/jump-game-ii/


class Solution {
public:
    int ways(vector<int>&arr, int n,int i,vector<int>&dp){
        if(i>=n-1)
            return 0;
        
        if(dp[i]!=0)
            return dp[i];
        int mini =100000;
        for(int j=1;j<=arr[i];j++)
        {
            
                mini=min(1+ways(arr,n,i+j,dp),mini);
        }
        return dp[i]=mini;
         
    }
    int jump(vector<int>& nums) {
         int n=nums.size();
          vector<int>dp(n+2,0);
        
         int ans=ways(nums,n,0,dp);
        // for(auto it:dp)
        //     cout<<it<<" ";
        // cout<<endl;
        return ans;
        
    }
};
