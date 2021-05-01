Link for Ques:
https://leetcode.com/contest/biweekly-contest-51/problems/maximum-element-after-decreasing-and-rearranging/

 int maximumElementAfterDecrementingAndRearranging(vector<int>& arr) {
       // int temp=*max_element(arr.begin(),arr.end());
          sort(arr.begin(),arr.end());
        if(arr[0]!=1)
        {
            arr[0]=1;
        }
          for(int i=1;i<arr.size();i++)
          {
                if(arr[i]-arr[i-1]<=1)
                {
                    
                }
              else
              {
                  arr[i]=arr[i-1]+1;
              }
          }
        return arr[arr.size()-1];
       
    }
