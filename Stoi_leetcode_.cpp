Link for Ques:
https://leetcode.com/problems/string-to-integer-atoi/


class Solution {
public:
   int myAtoi(string s) {
       int ans;
     unsigned long  long ans1=0;
      int sign=1;
     
      int cnt=0;
       int i=0;
       int flag1=0,flag2=0;
        for(auto it:s)
        {
            if(it==' ')
                flag1++;
            else
                break;
        }
       if(flag1==s.length())
           return 0;
       
           
      while(s.at(i)==' ')
      {
       s.erase(i,1);
      }
     
           
     
      if(s.at(0)=='-')
      { sign=-1;
        s=s.substr(1);
      }
      else if(s.at(0)=='+')
      { //sign=-1;
        s=s.substr(1);
      }
        for(auto it:s)
       {
           if(it=='0')
               flag2++;
           else break;
       }
       if(flag2==s.size())
           return 0;
       
       while(s.at(i)=='0')
       {
           s.erase(i,1);
       }
       
      int flag=0;
       for(auto it:s)
       {
           if(it>='0' and it<='9')
               flag++;
           else break;
       }
       if(flag>=11)
       {
          if(sign==-1)
          return -2147483648;
          else
              return 2147483647;
       }
       
      for(auto it:s)
      {
         
           if(it>='0' and it<='9')
          {   flag++;
              ans=ans1;
              ans1=(ans1*10)+(it-'0');
             
          }

          else
              break;    
         
      }
      if(ans1>=2147483648)
      {   if(sign==-1)
          return -2147483648;
          else
              return 2147483647;
     
      }
      if(sign==-1)
      return -ans1;
      return ans1;
     
 
   }
};
