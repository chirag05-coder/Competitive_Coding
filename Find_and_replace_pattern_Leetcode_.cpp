Link for Ques:
https://leetcode.com/explore/challenge/card/may-leetcoding-challenge-2021/600/week-3-may-15th-may-21st/3750/

class Solution {
public:
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
        int k=1;
        unordered_map<char,int>umap;
        
        string str;
        for(int i=0;i<pattern.length();i++)
        {   char ch=pattern.at(i);
              if(umap.find(ch)==umap.end())
              {
                    umap[ch]=k;
                     k++;
                  str+=to_string(umap[ch]);
                     if(k==10)
                         k=1;
              }
              else
              {
                  str+=to_string(umap[ch]);
              }
        }
        umap.clear();
          vector<string>v;
        k=1;
       //cout<<str<<endl;
        for(int i=0;i<words.size();i++)
        {      string str1;
              for(int j=0;j<words[i].size();j++)
              {    char ch=words[i].at(j);
              if(umap.find(ch)==umap.end())
              {
                    umap[ch]=k;
                     k++;
                  str1+=to_string(umap[ch]);
                  if(k==10)
                      k=1;
              }
              else
              {
                  str1+=to_string(umap[ch]);
              }
                  
              }
         umap.clear();
              k=1;
             v.push_back(str1);
        }
        // for(auto it:v)
        // {
        //      cout<<it<<" ";
        // }
        // cout<<endl;
        vector<string>res;
        
        for(int i=0;i<v.size();i++)
        {
               if(v[i]==str)
               {
                    res.push_back(words[i]);
               }
        }
        
        
      

        return res;
        
    }
};
