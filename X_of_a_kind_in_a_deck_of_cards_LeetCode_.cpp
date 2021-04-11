Link For Ques:
https://leetcode.com/problems/x-of-a-kind-in-a-deck-of-cards/


class Solution {
public:
    bool hasGroupsSizeX(vector<int>& v) {
        if(v.size()==1)
            return false;
        unordered_map<int,int>umap;
        for(int i=0;i<v.size();i++)
        {
              umap[v[i]]++;
        }
        int mini=INT_MAX;
        for(auto it:umap)
        {
            mini=min(it.second,mini);
        }
        if(mini<2)
            return false;
        v.clear();
        for(auto it:umap)
        {
             v.push_back(it.second);
        }
        int k=2;
        while(k<=mini)
        {   int cnt=0;
        for(int i=0;i<v.size();i++)
        {      if(v[i]%k==0)
                 cnt++;
                 
        }
         if(cnt==v.size())
             return true;
         cnt=0;
         k++;
        }
     
        
    }
};
