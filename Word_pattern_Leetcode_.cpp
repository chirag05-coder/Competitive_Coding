Link for Ques:
https://leetcode.com/problems/word-pattern/


class Solution {
public:
    bool wordPattern(string pattern, string s) {
        unordered_map<string,char>umap;
        unordered_map<char,char>mp;
        string str;
        char ch='a';
        string check;
        for(int i=0;i<pattern.length();i++)
        {    if(mp.find(pattern.at(i))==mp.end())
             {
                    check.push_back(ch);
                  mp[pattern.at(i)]=ch++;
             }
         else
         {
             check.push_back(mp[pattern.at(i)]);
         }
             
        }
        ch='a';
        string res;
        for(int i=0;i<s.length();i++)
        {
              if(s.at(i)!=' ')
              {
                   str.push_back(s.at(i));
              }
            else
            {
                if(umap.find(str)==umap.end())
                {
                     res.push_back(ch);
                     umap[str]=ch++;
                }
                else
                {
                    res.push_back(umap[str]);
                }
                str.clear();
            }
        }
        if(umap.find(str)==umap.end())
                {      res.push_back(ch);
                      umap[str]=ch++;
                }
        else
        {
            res.push_back(umap[str]);
        }
       
        if(pattern.size()==1)
            return true;
        
        return res==check;
        
        
    }
};
