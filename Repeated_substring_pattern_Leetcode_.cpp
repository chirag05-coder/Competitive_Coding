Link for Ques:
https://leetcode.com/problems/repeated-substring-pattern/


class Solution {
public:
    bool repeatedSubstringPattern(string s) {
       string str =s+s;
        str=str.substr(1);
        str.pop_back();
         if(str.find(s)!=string::npos)
         {
              return true;
         }
        else 
        {
            return false;
        }
        
    }
};
