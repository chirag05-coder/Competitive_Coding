Link for Ques:
https://leetcode.com/problems/minimize-maximum-pair-sum-in-array/


class Solution {
public:
    int minPairSum(vector<int>& nums) {
        int start =0 ,end=nums.size()-1;
     sort(nums.begin() , nums.end());
         int maxi=INT_MIN;
        int sum=0;
        while(start<end)
        {
            sum=nums[start]+nums[end];
            start++;
            end--;
            maxi=max(maxi,sum);
        }
        return maxi;
        
    }
};
