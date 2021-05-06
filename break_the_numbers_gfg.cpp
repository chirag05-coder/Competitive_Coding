Link for Ques:
https://practice.geeksforgeeks.org/problems/break-numbers0435/1/?problemStatus=unsolved&page=1&sortBy=newest&category[]=Mathematical&category[]=Arrays&category[]=Strings&category[]=Hash&category[]=Stack&category[]=Bit%20Magic&category[]=Recursion&category[]=sliding-window&query=problemStatusunsolvedpage1sortBynewestcategory[]Mathematicalcategory[]Arrayscategory[]Stringscategory[]Hashcategory[]Stackcategory[]Bit%20Magiccategory[]Recursioncategory[]sliding-window


// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    long long countWays(long long N){
        // code here
        
    return (N*(N+1)/2) +N+1;    
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        long long N;
        cin>>N;
        
        Solution ob;
        cout<<ob.countWays(N)<<endl;
    }
    return 0;
}  // } Driver Code Ends
