Link for QUes:
https://leetcode.com/problems/path-crossing/


class Solution {
public:
    bool isPathCrossing(string path) {
//         auto it=unique(path.begin(),path.end());
//         path.resize(std::distance(path.begin(),it));
        

        
        
        int x=0,y=0;
        set<pair<int,int>>st;
        st.insert({0,0});
        for(int i=0;i<path.length();i++)
        {
               if(path.at(i)=='S')
               {   y--;
                
               }
               else if(path.at(i)=='W')
               {
                     x--;
               }
            else if(path.at(i)=='N')
            {
                   y++;
            }
            else 
            {
                   x++;
            }
            if(st.find(pair<int,int>(x,y))!=st.end())
            {  
                 return true;
                 
            }
            else
            {
                st.insert({x,y});
            }
               
        }
        
        return false;
        
    }
};
