Link for Ques:
https://leetcode.com/problems/minimum-time-visiting-all-points/


class Solution {
public:
    int minTimeToVisitAllPoints(vector<vector<int>>& points) {
         int x1,y1,x2,y2,cost=0;
         x1=points[0][0];
          y1=points[0][1];
        for(int i=1;i<points.size();i++)
        {
                  x2=points[i][0];
                  y2=points[i][1];
            if(x1==x2 and y1!=y2)
            {  cost+=abs(y1-y2);
                 
            }
            else if(y1==y2 and x1!=x2)
            {
                   cost+=abs(x1-x2);
            }
            else 
            {
               cost+=max(abs(x1-x2),abs(y1-y2));
               
            }
             x1=x2;
            y1=y2;
                     
                 
        }
        return cost;
        
    }
};
