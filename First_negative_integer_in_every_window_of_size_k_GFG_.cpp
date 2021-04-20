Link for Ques:
https://practice.geeksforgeeks.org/problems/first-negative-integer-in-every-window-of-size-k3345/1

#include <bits/stdc++.h>
using namespace std;

vector<long long> printFirstNegativeInteger(long long int arr[],
                                             long long int n, long long int k);

// Driver program to test above functions
int main() {
    long long int t, i;
    cin >> t;
    while (t--) {
        long long int n;
        cin >> n;
        long long int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        long long int k;
        cin >> k;

        vector<long long> ans = printFirstNegativeInteger(arr, n, k);
        for (auto it : ans) cout << it << " ";
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends




vector<long long> printFirstNegativeInteger(long long int arr[],
                                             long long int N, long long int k) {
                                                 
   long long int i=0,j=0;
   deque<long long int>dq;
   vector<long long int>v;
   while(j<N)
   {    if(arr[j]<0)
         {
             dq.push_back(arr[j]);
         }
       
       if(j-i+1==k)
       {   if(!dq.empty())
            {
                v.push_back(dq.front());
            }
            else
            {
                v.push_back(0);
            }
            if(arr[i]==dq.front())
            {
                dq.pop_front();
            }
           
           i++;
           j++;
       }
       if(j-i+1<k)
       {
           j++;
       }
   }
   return v;
                                                 
 }
