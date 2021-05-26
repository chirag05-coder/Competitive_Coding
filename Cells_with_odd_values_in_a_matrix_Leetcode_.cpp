Link for Ques:
https://leetcode.com/problems/cells-with-odd-values-in-a-matrix/


class Solution {
public:
   int oddCells(int m, int n, vector<vector<int>>& indices) {
       int arr[m][n];
       for(int i=0;i<m;i++)
       {
           for(int j=0;j<n;j++)
           {
               arr[i][j]=0;
           }
       }
       for(int i=0;i<indices.size();i++)
       {
           int x=indices[i][0];
           int y=indices[i][1];
           for(int j=0;j<n;j++)
           {
               arr[x][j]+=1;
           }
            for(int k=0;k<m;k++)
           {
               arr[k][y]+=1;
           }
           
       }
       int cnt=0;
        for(int i=0;i<m;i++)
       {
           for(int j=0;j<n;j++)
           {
               if(arr[i][j]&1)
                   cnt++;
           }
        }
       return cnt;
       
       
   }
};
