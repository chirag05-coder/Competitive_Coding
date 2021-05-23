Link for Ques:
https://leetcode.com/problems/intersection-of-two-arrays-ii/submissions/



class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int>umap;
        for(int i=0;i<nums1.size();i++)
        {
               umap[nums1[i]]++;
        }
        
     vector<int>v(1000,0);
        for(auto it:umap)
        {
              v[it.first]=it.second;
               umap[it.first]=0;
        }
        for(int i=0;i<nums2.size();i++)
        {
               umap[nums2[i]]++;
        
        }
        nums1.clear();
        for(auto it:umap)
        {
              if(it.second>0)
              {   int mini=min(v[it.first],it.second);
                    int m=it.first;
                    while(mini--)
                    {
                         nums1.push_back(m);
                    }
              }
        }
        return nums1;
        
        
        
        
    }
};
