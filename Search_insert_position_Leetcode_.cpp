Link for Ques:
https://leetcode.com/problems/search-insert-position/


class Solution {
public:
    int searchInsert(vector<int>& arr, int target) {
           int s=0,e=arr.size()-1;
        while(s<=e)
        {
               int mid=(s+e)/2;
               if(arr[mid]==target)
               {
                     return mid ;
               }
            else if(arr[mid]>target)
            {
                    e=mid-1;
            }
            else if(arr[mid]<target)
            {
                  s=mid+1;
            }
            
        }
        return s;
        
    }
};
