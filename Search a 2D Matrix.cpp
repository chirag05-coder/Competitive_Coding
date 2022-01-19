Link for Ques:
https://leetcode.com/problems/search-a-2d-matrix/


class Solution {
public:
    bool searchMatrix(vector<vector<int>>& arr, int target) {
        
        int s=0,e=arr.size()-1;
        int mid;
        int pos=0;
        while(s<=e)
            
        {mid=s+(e-s)/2;
          if(arr[mid][0]==target)
               return true;
           
         if(arr[mid][0]<target)
         {s=mid+1;
          pos=mid;
         }
         else
             e=mid-1;
             
        }
      //  return false;
      //  int pos=mid-1;
    cout<<pos<<endl;
        s=0;
        e=arr[0].size()-1;
        while(s<=e)
        {
               mid=s+(e-s)/2;
              if(arr[pos][mid]==target)
                  return true;
               if(arr[pos][mid]<target)
                    s=mid+1;
               else
                   e=mid-1;
                    
        }
        return false;
        
        
    }
};
