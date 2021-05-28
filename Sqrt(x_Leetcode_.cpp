Link for Ques:
https://leetcode.com/problems/sqrtx/



class Solution {
public:
    int mySqrt(int x) {
        if(x==0 or x==1)
            return x;
      long long int s=0,e=x/2,ans=0;
        while(s<=e)
        {   long long int mid=(s+e)/2;
              if(mid*mid==x)
              {
                   return mid;
              }
         else if(mid*mid>x)
         {
                e=mid-1;
         }
         else
         {  ans=mid;
             s=mid+1;
         }
            
        }
        return ans;
        
    }
};
