Link for Ques:
https://leetcode.com/problems/find-words-that-can-be-formed-by-characters/


class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
    vector<int>v(26,0);
        for(int i=0;i<chars.length();i++)
        {
              char ch=chars.at(i);
               int x=ch-'a';
            v[x]++;
                
        }
        int cnt=0;
        vector<int>temp(v);
        for(int i=0;i<words.size();i++)
        {     int flag=0;
             for(int j=0;j<words[i].length();j++)
             {    char ch=words[i][j];
                    int idx=ch-'a';
                   if(v[idx]>0)
                   {
                         v[idx]--;
                   }
                   else 
                   {
                       flag++;
                       break;
                   }
                  
             }
         if(flag==0)
         {
              cnt+=words[i].length();
         }
         v.clear();
         v=temp;
        }
        return cnt;
        
    }
};
