Link for Ques:
https://leetcode.com/problems/substrings-of-size-three-with-distinct-characters/



class Solution {
public:
    int countGoodSubstrings(string s) {
         int j=0,n=s.length();
        int i=0;
        unordered_map<char,int>umap;
        int cnt=0;
        
        
        while(j<n)
        {   umap[s[j]]++;
            if(j-i+1==3)
            {   if(umap.size()==3)
                   {
                       cnt++;
                    }
             j++;
             umap[s[i]]--;
             if(umap[s[i]]==0)
             {
                   umap.erase(s[i]);
             }
             i++;
                
            }
            if(j-i+1<3)
            {
                
                j++;
            }
        }
        return cnt;
        
    }
};
