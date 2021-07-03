Link for Ques:
https://leetcode.com/problems/length-of-last-word/


class Solution {
public:
    int lengthOfLastWord(string str) {
        
         
      while(str[str.length()-1]==' ' and str.length()>1)
      {
          str.pop_back();
      }
        
        
        size_t found;
  
   
    found = str.find_last_of(" ");
  
   
    if (found == string::npos) {
        return str.length();
    }
        else if(found==0 and str.length()==1)
            return 0;
        else
            return str.length()-found-1;
    }
};
