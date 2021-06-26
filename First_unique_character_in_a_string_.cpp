Link for Ques:
https://leetcode.com/problems/first-unique-character-in-a-string/


class Solution {
public:
    int firstUniqChar(string s) {
          unordered_map<char,int>umap;
        for(int i=0;i<s.length();i++)
        {
              umap[s.at(i)]++;
        }
        for(int i=0;i<s.length();i++)
        {
                if(umap[s.at(i)]==1)
                    return i;
        }
        return -1;
        
    }
};
