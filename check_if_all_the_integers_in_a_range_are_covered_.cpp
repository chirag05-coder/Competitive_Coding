Link for Ques:
https://leetcode.com/problems/check-if-all-the-integers-in-a-range-are-covered/


class Solution {
public:
    bool isCovered(vector<vector<int>>& ranges, int left, int right) {
         int arr[52]{0};
        unordered_set<int>st;
          int k=0;
        for(int i=0;i<ranges.size();i++)
       {     
               for(int j=ranges[i][0];j<=ranges[i][1];j++)
               {
                     st.insert(j);
               }
            k++;
        
        
        
        }
        
        for(int i=left;i<=right;i++)
        {
              if(st.find(i)==st.end())
                    return false;
        }
        return true;
    }
};
