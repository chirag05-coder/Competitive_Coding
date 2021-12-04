Link for Ques:
https://leetcode.com/problems/best-time-to-buy-and-sell-stock/



class Solution {
public:
    int maxProfit(vector<int>& prices) {
   int mini=INT_MAX;
   int max=0;
        for(int i=0;i<prices.size();i++)
        {    if(prices.at(i)<mini)
              {   mini=prices.at(i);
              }
           else if(prices.at(i)-mini>max)
            {     max=prices.at(i)-mini;
               
            }
            
        }
        return max;
        
    }
};
