Link for Ques:
https://leetcode.com/contest/weekly-contest-257/problems/count-special-quadruplets/


class Solution {
public:
    int countQuadruplets(vector<int>& v) {
        unordered_map<int,vector<int>>umap;
        int cnt=0;
        for(int i=0;i<v.size();i++)
        {
              umap[v[i]].push_back(i);
        }
        
        int s=0,e=v.size()-1;
        
       
         
              for(int j=0;j<v.size();j++)
              {       int a=v[j];
                     
                 for(int i=j+1;i<v.size();i++)
                 {         int b=v[i];
                      for(int x=i+1;x<v.size();x++)
                      {
                           if(umap.find(a+b+v[x])!=umap.end())
                           { 
                                vector<int>temp=umap[a+b+v[x]];
                                 for(int y=0;y<temp.size();y++)
                                 {
                                         if(temp[y]>x)
                                              cnt++;
                                 }
                           
                           }
                      }
                 }
         }
        return cnt;
        
    }
};
