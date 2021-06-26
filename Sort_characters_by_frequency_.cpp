Link for Ques:
https://leetcode.com/problems/sort-characters-by-frequency/


class Solution {
public:
    string frequencySort(string s) {
       
        unordered_map<char,int>umap;
        for(int i=0;i<s.length();i++)
        {
               umap[s.at(i)]++;
        }
        multimap<int,char>mp;
        for(auto it:umap)
        {
            mp.insert({it.second,it.first});
            
        }
        string str;
        for(auto it=mp.crbegin();it!=mp.crend();it++)
        {  int x=it->first;
             while(x--)
        {   str.push_back(it->second);
            
        }
        }
        return str;
        
    }
};
