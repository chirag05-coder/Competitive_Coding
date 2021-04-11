Link For Ques:
https://leetcode.com/problems/plus-one/submissions/

class Solution {
public:
    vector<int> plusOne(vector<int>&v) {
        int c=1;
        reverse(v.begin(),v.end());
        for(int i=0;i<v.size();i++)
        {
              if(c+v[i]>=10)
              {  c=(c+v[i]/10);
                 v[i]=(c+v[i])%10;
                  
                  
              }
              else
              {
                  v[i]+=c;
                  c=0;
              }
        }
        if(c>0)
            v.push_back(c);
        reverse(v.begin(),v.end());
        return v;
        
    }
};
