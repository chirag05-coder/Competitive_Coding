Link for Ques:
https://practice.geeksforgeeks.org/problems/equilibrium-point-1587115620/1#

#include <iostream>
using namespace std;


 // } Driver Code Ends

#include<bits/stdc++.h>
class Solution{
    public:
    // Function to find equilibrium point in the array.
    // a: input array
    // n: size of array
    int equilibriumPoint(long long a[], int n) {
    
        // Your code here
        long long sum=accumulate(a,a+n,0);
        if(n==1)
        return 1;
        long long temp=0;
        for(int i= 0;i<n-1;i++)
        {   if(temp==sum-a[i]-temp)
                return i+1;
                
            temp+=a[i];    
            
        }
        return -1;
        
    }

};

// { Driver Code Starts.


int main() {

    long long t;
    
    //taking testcases
    cin >> t;

    while (t--) {
        long long n;
        
        //taking input n
        cin >> n;
        long long a[n];

        //adding elements to the array
        for (long long i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        Solution ob;

        //calling equilibriumPoint() function
        cout << ob.equilibriumPoint(a, n) << endl;
    }
    return 0;
}
  // } Driver Code Ends
