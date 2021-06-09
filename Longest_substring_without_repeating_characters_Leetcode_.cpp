Link for Ques:
https://leetcode.com/problems/longest-substring-without-repeating-characters/



#include<bits/stdc++.h>
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        set<char>st;
        deque<char>dq;
        int len=0,maxii=0;
        int start=0;
        for(int i=0;i<s.length();i++)
        {
             char ch=s.at(i);
              if(st.find(ch)==st.end())
              {   st.insert(ch);
                  dq.push_back(ch);
                  
              }
            else
            {   // maxii=max(maxii,dq.size());
                   if(dq.size()>maxii)
                   {
                        maxii=dq.size();
                   }
                while(dq.front()!=ch)
                {  st.erase(dq.front());
                    dq.pop_front();
                   
                    
                }
               dq.pop_front();
             dq.push_back(ch);
            }
        }
     
         if(dq.size()>maxii)
                   {
                        maxii=dq.size();
                   }
        return maxii;
        
    }
};
