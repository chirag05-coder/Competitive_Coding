Link for QUes:
https://leetcode.com/explore/interview/card/top-interview-questions-easy/92/array/578/

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
          set<int>st;
       for(auto it:nums)
       {
           if(st.find(it)!=st.end())
               return true;
           else
               st.insert(it);
       }
       return false;
       
        
    }
};
