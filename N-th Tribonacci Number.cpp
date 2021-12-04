Link for Ques:
https://leetcode.com/problems/n-th-tribonacci-number/

class Solution {
public:
    int tribonacci(int n) {
          int a=0,b=1,d=1;;
           if(n<=1)
                return n;
        if(n==2)
             return 1;
           int c=0;
         for(int i=3;i<=n;i++)
         {
             c=d+a+b;
             a=b;
             b=d;
             d=c;
         }
        return c;
        
    }
};
