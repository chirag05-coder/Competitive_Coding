Link for Ques:
https://leetcode.com/problems/subsets-ii/


class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
       vector<vector<int>>v;
       vector<int>in;
       v.push_back(in);
       int lim=pow(2,nums.size());
       for(int i=1;i<lim;i++)
       {
           for(int j=0;j<nums.size();j++)
           {
                if (i & (1<<j))
                {
               in.push_back(nums[j]);
               v.push_back(in);
                }
           }
           in.clear();
       }
       sort(v.begin(),v.end());
      auto it=unique(v.begin(),v.end());
       v.resize(distance(v.begin(),it));
       return v;
        
    }
};
