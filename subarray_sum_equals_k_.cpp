Link for Ques:
https://leetcode.com/problems/subarray-sum-equals-k/

class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int sum=0,cnt=0;
         unordered_map<int,int>umap;
        
        int i=0;
        umap[0]++;
        while(i<nums.size())
        {
            sum+=nums[i];
            
            auto it=umap.find(sum-k);
            if(it!=umap.end())
            {
                 cnt+=it->second;
            }
            umap[sum]++;
            i++;
        }
        return cnt;
        
        
        
        
    }
};
