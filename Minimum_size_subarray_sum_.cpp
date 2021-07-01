Link for Ques:
https://leetcode.com/problems/minimum-size-subarray-sum/


class Solution {
public:
    int minSubArrayLen(int k, vector<int>& nums) {
        int sum=0,j=0,i=0;
        int cnt=0;
        int mini=INT_MAX;
        int flag=0;
    
         while(j<nums.size())
         {   sum+=nums[j];
               flag++;
             
               
               while(sum>=k)
               {    
                    mini=min(mini,flag);
                    sum-=nums[i];
                    flag--;
                   i++;
               }
                
                  
                  
              
            
          j++;
               
         }
        if(mini==INT_MAX)
        return 0;
         
       
        return mini;
        
        
    }
};
