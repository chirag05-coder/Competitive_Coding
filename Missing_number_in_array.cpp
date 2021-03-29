Link For Question:
https://practice.geeksforgeeks.org/problems/missing-number-in-array1416/1#


#include <bits/stdc++.h>
using namespace std;

int MissingNumber(vector<int>& array, int n);

// Position this line where user code will be pasted.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<int> array(n - 1);
        for (int i = 0; i < n - 1; ++i) cin >> array[i];

        cout << MissingNumber(array, n) << "\n";
    }
    return 0;
}// } Driver Code Ends


// User function template for C++

int MissingNumber(vector<int>& arr, int n) {
    sort(arr.begin(),arr.end());
    int k=1;
    for(int i=0;i<n;i++)
     {     if(k !=arr[i])
                return k;
                
                k++;
     }
     //return k;
    // Your code goes here
}
