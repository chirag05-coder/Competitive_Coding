Link for Ques:
https://practice.geeksforgeeks.org/problems/row-with-minimum-number-of-1s5430/1#:~:text=Input%3A%20N%3D4%2CM,Thus%2C%20the%20answer%20is%202.

// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int minRow(int N, int M, vector<vector<int>> A) {
        // code here
        int i=1,maxii=INT_MAX,pos=0;
        for(auto it:A)
        {
             int sum=accumulate(it.begin(),it.end(),0);
               if(sum<maxii)
               {
                     pos=i;
                     maxii=sum;
               }
               i++;
        }
        return pos;
        
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, M;
        cin >> N >> M;
        vector<vector<int>> A(N, vector<int>(M));
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < M; j++) {
                cin >> A[i][j];
            }
        }
        Solution ob;
        cout << ob.minRow(N, M, A) << "\n";
    }
}  // } Driver Code Ends
