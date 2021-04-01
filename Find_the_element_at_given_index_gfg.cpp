Link for Question:

https://practice.geeksforgeeks.org/problems/find-the-element-at-given-index4630/1



#include <bits/stdc++.h>

using namespace std;

int findElement(int arr[], int n, int x, int ranges[][2], int k);

int main() {
   int t;
   cin >> t;
   while (t--) {
       int n, x, k;
       cin >> n >> x >> k;
       int arr[n];
       for (int i = 0; i < n; i++) {
           cin >> arr[i];
       }
       int ranges[k][2];
       for (int i = 0; i < k; i++) {
           cin >> ranges[i][0] >> ranges[i][1];
       }
       auto ans = findElement(arr, n, x, ranges, k);
       cout << ans << "\n";
   }
   return 0;
}

// } Driver Code Ends






// Function to compute the element at
// given index
int findElement(int arr[], int n, int x, int ranges[][2], int k) {
   for(int i=0;i<k;i++)
   {
       
            rotate(arr+ranges[i][0],(arr+ranges[i][1]),(arr+ranges[i][1]+1));
       
   }
   // for(int i=0;i<n;i++)
   // cout<<arr[i]<<" ";
   // cout<<"\n";
   return arr[x];
}
