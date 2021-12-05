Link for Ques:
https://leetcode.com/problems/min-cost-climbing-stairs/


class Solution {
public:
//     int mini(vector<int>&arr,int n,int i,vector<int>&dp,int cost1)
//     {
//         if(i>n)
//             return cost1;
//         if(i==n)
//             return cost1;
//             if(dp[i]!=0)
//                 return dp[i];
//                int x=mini(arr,n,i+1,dp,cost1+arr[i]);
//                 int y=mini(arr,n,i+2,dp,cost1+arr[i]);
        
               
//                 return min(x,y);
//     }
    int minCostClimbingStairs(vector<int>& cost) {
        
//            vector<int>dp(cost.size()+1,0);
//              vector<int>dp1(cost.size()+1,0);
           
             
//            int x= mini(cost,cost.size(),0,dp,0);
           
         
//               int y=mini(cost,cost.size(),1,dp1,0);
        
//              return min(x,y);
        
        int i=cost.size()-2;
         cost.push_back(0);
        
        for(;i>=0;i--){
            int x=min(cost[i]+cost[i+1], cost[i]+cost[i+2]);
            cost[i]=x;
        }
        return min(cost[0],cost[1]);
            
         
             
        
            
    }
};
