Link for Ques:
https://leetcode.com/problems/replace-all-s-to-avoid-consecutive-repeating-characters/

class Solution {
public:
    string modifyString(string s) {
        if(s.length()==1 and s.at(0)=='?')
        {
               s.at(0)='a';
        }
        else if(s.length()>1)
        {    char ch='a';
            if(s.at(0)=='?' and s.at(1)!='?')
            {   
                ch=s.at(1);
                if(ch!='a')
                  ch='a';
                else
                    ch='b';
                s.at(0)=ch;
            }
         
            if(s.at(0)=='?' and s.at(1)=='?')
            {
                  s.at(0)=ch;
                ch++;
                s.at(1)=ch;
            }
            if(s.at(0)!='?' and s.at(1)=='?')
            {
                      ch=s.at(0);
                      if(ch!='a')
                          ch='a';
                       else
                      ch++;
                      s.at(1)=ch;
            }
          
             for(int i=1;i<s.length();i++)
             {
                 if(s.at(i-1)==s.at(i) and s.at(i-1)!='z')
                 {
                     char ch=s.at(i-1);
                       ch++;
                     s.at(i-1)=ch;
                 }
                 else if(s.at(i-1)==s.at(i) and s.at(i-1)=='z')
                 {
                         s.at(i)='a';
                 }
                 else if(s.at(i-1)!=s.at(i) and s.at(i)=='?' )
                 {    char ch=s.at(i-1); 
                      if(ch=='z' or ch!='a')
                      {
                          s.at(i)='a';
                      }
                      else
                      {   ch++;
                           s.at(i)=ch;
                           
                      }
                     
                 }
                
                     
             }
          
            for(int i=1;i<s.length();i++)
            {
                   if(s.at(i-1)==s.at(i))
                   {
                       char ch=s.at(i-1);
                         ch++;
                       s.at(i)=ch;
                   }
            }
                
         
         
        }
        return s;
    }
};
