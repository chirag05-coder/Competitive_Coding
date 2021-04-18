Link for Ques:
https://leetcode.com/explore/interview/card/top-interview-questions-easy/92/array/727/


class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        auto it=unique(nums.begin(),nums.end());
          nums.resize(distance(nums.begin(),it));
        return nums.size();
        
    }
};
