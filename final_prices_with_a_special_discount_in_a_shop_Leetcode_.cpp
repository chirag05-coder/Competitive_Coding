Link for Ques:
https://leetcode.com/problems/final-prices-with-a-special-discount-in-a-shop/


class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        
        
        for(int i=0;i<prices.size();i++)
        {    int j=i+1;
              while(j<prices.size())
              {
                     if(prices[i]>=prices[j])
                     {
                         prices[i]-=prices[j];
                         break;
                     }
                  j++;
              }
        }
        
        return prices;
        
    }
};
