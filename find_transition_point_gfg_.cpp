Link for Ques:
https://practice.geeksforgeeks.org/problems/find-transition-point-1587115620/1/?problemStatus=unsolved&problemType=functional&page=1&sortBy=submissions&category[]=Arrays&category[]=Strings&category[]=Hash&category[]=sliding-window&query=problemStatusunsolvedproblemTypefunctionalpage1sortBysubmissionscategory[]Arrayscategory[]Stringscategory[]Hashcategory[]sliding-window




#include <bits/stdc++.h>
using namespace std;

int transitionPoint(int arr[], int n);

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n], i;
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        cout << transitionPoint(a, n) << endl;
    }
    return 0;
}// } Driver Code Ends


int transitionPoint(int arr[], int n) {
    // code here
    int s=0,e=n-1;
    while(s<=e)
    {
        int mid=(s+e)/2;
        if(arr[mid]==1)
         {   if(arr[mid-1]==1)
              e =mid-1;
              else
              {
             return mid;
             break;
              }
         }
         else if(arr[mid]==0)
           {
               s=mid+1;
           }
    }
    return -1;
}
