Link for Ques:
https://practice.geeksforgeeks.org/problems/deee0e8cf9910e7219f663c18d6d640ea0b87f87/1/?problemStatus=unsolved&problemType=functional&page=1&sortBy=newest&category[]=Mathematical&category[]=Arrays&category[]=Strings&category[]=Hash&category[]=Stack&category[]=Bit%20Magic&category[]=Greedy&category[]=STL&category[]=Binary%20Search&category[]=Recursion&category[]=number-theory&category[]=sliding-window&query=problemStatusunsolvedproblemTypefunctionalpage1sortBynewestcategory[]Mathematicalcategory[]Arrayscategory[]Stringscategory[]Hashcategory[]Stackcategory[]Bit%20Magiccategory[]Greedycategory[]STLcategory[]Binary%20Searchcategory[]Recursioncategory[]number-theorycategory[]sliding-window


#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution {
  public:
    vector<int> max_of_subarrays(vector<int> arr, int n, int k) {
        // your code here
        int i=0,j=0;
        deque<int>dq;
        vector<int>v;
        //dq.push_back(arr[0]);
        while(j<n)
        {    while(!dq.empty() and arr[j]>dq.back())
              {
                    dq.pop_back();
              }
              dq.push_back(arr[j]);
            if(j-i+1==k)
            {   v.push_back(dq.front());
            
               if(dq.front()==arr[i])
                 {
                      dq.pop_front();
                 }
                i++;
                j++;
            }
            else if(j-i+1<k)
            {
                j++;
            }
        }
        return v;
    }
};

// { Driver Code Starts.

int main() {

    int t;
    cin >> t;

    while (t--) {

        int n, k;
        cin >> n >> k;

        vector<int> arr(n);
        for (int i = 0; i < n; i++) cin >> arr[i];
        Solution ob;
        vector<int> res = ob.max_of_subarrays(arr, n, k);
        for (int i = 0; i < res.size(); i++) cout << res[i] << " ";
        cout << endl;
    }

    return 0;
}  // } Driver Code Ends
