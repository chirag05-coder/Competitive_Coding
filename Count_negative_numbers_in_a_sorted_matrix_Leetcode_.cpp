Link for Ques:
https://leetcode.com/problems/count-negative-numbers-in-a-sorted-matrix/


class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        
        
        int cnt=0;
        if(grid[0][0]<0)
        {
             cnt=grid.size()*grid[0].size();
        }
        else
        {
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[i].size();j++)
            {
                   if(grid[i][grid[i].size()-1]>=0)
                   {
                        break;
                   }
                else if(grid[i][0]<0)
                {
                     cnt+=grid[i].size();
                    break;
                }
                else if(grid[i][j]<0)
                { 
                    cnt+=grid[i].size()-j;
                    break;
                }
            }
        }
        }
        return cnt;
        
    }
};
