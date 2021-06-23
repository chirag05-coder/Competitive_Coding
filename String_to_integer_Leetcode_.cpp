Link for Ques:
https://leetcode.com/problems/two-sum/


class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>umap;
        for(int i=0;i<nums.size();i++)
        {
               umap[nums[i]]=i;
        }
        vector<int>v;
        for(int i=0;i<nums.size();i++)
        {
              int tar=target-nums[i];
              if(umap.find(tar)!=umap.end() and umap[tar]!=i)
              {
                    v.push_back(i);
                    v.push_back(umap[tar]);
                  break;
              }
        }
        return v;
        
    }
};
