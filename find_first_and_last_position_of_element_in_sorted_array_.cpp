Link for Ques:
https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/


class Solution {
public:
    int pos(vector<int>arr,int target,char ch)
        
    {    
          int s=0,e=arr.size()-1;
        
        int pos=-1;
        while(s<=e)
        {   int mid=(s+e)/2;
             if(arr[mid]==target)
             {    
                 pos=mid;
                 if(ch=='L')
                 {
                     e=mid-1;
                 }
                 else
                 {
                     s=mid+1;
                 }
                    
             }
         
              
        
        else if(arr[mid]>target)
        {
               e=mid-1;
        }
        else
        {
            s=mid+1;
        }
        }
        return pos;
        
    }
    vector<int> searchRange(vector<int>& arr, int target) {
        
    
        
        
    vector<int> v;
    v.push_back(pos(arr,target,'L'));
    v.push_back(pos(arr,target,'R'));
    return v;
        
    }
   
};
