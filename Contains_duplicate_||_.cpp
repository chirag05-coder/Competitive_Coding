Link for Ques:
https://leetcode.com/problems/contains-duplicate-ii/



class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        
        unordered_map<int,int>umap;
        int i=0;
        for(int i=0;i<nums.size();i++)
        {
             if(umap.find(nums[i])==umap.end())
             {
                   umap[nums[i]]=i;
             }
        
        }
         for(int i=0;i<nums.size();i++)
         {     
              if(i!=umap[nums[i]] and abs(umap[nums[i]]-i)<=k)
                          return true;
             
              else
                  umap[nums[i]]=i;
         }
       
         return false;
    }
};
