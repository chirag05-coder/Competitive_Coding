Link for Ques:
https://leetcode.com/problems/longest-common-prefix/


class Solution {
public:
    string longestCommonPrefix(vector<string>& str) {
         string res;
        unordered_map<char,int>umap;
        int cnt=0;
        int j=0;
        bool flag=true;
        while(flag)
        {   char ch;
            for(int i=0;i<str.size();i++)
            {  
                
                
                 if(j<str[i].length())
                 {
                umap[str[i].at(j)]++;
                ch=str[i].at(j);
                 }
                 }
            j++;
            cnt++;
            if(umap.size()==1 and umap[ch]==str.size())
            {
                res.push_back(ch);
            }
              else
              {
                  flag=false;
                  break;
              }
         umap.erase(ch);
            
        }
        return res;
        
    }
};
