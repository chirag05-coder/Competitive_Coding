Link for Ques:
https://leetcode.com/problems/maximum-subarray/



class Solution {
public:
    int maxSubArray(vector<int>& arr) {
        
        int maxi=INT_MIN,c_sum=0;
        for(int i=0;i<arr.size();i++)
        {
            c_sum+=arr[i];
               maxi=max(c_sum,maxi);
              if(c_sum<0)
                  c_sum=0;
            
        }
        int ans=maxi;
        maxi=0,c_sum=0;

        return ans;
        
        
    }
};
