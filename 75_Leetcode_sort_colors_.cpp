Link for Ques:
https://leetcode.com/problems/sort-colors/

class Solution {
public:
    void sortColors(vector<int>& v) {
        int z=0,o=0,t=0;
        for(auto it:v)
        {   if(it==0)
            z++;
             else if(it==1)
                 o++;
             else
                 t++;
            
        }
        v.clear();
        while(z>0 or o>0 or t>0)
        {
              if(z>0)
              { v.push_back(0);
                 z--;
              }
               else if(o>0)
               {    v.push_back(1);
               o--;
               }else
               { v.push_back(2);
                   t--;
               }
               }
            
            
        
        
    }
};
