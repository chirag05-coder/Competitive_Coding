Link for Ques:
https://practice.geeksforgeeks.org/problems/siri-and-her-new-college2303/1/?category[]=Mathematical&category[]=Arrays&category[]=Strings&category[]=Hash&category[]=Mathematical&category[]=Arrays&category[]=Strings&category[]=Hash&problemStatus=unsolved&problemType=functional&page=1&sortBy=newest&query=category[]Mathematicalcategory[]Arrayscategory[]Stringscategory[]HashproblemStatusunsolvedproblemTypefunctionalpage1sortBynewestcategory[]Mathematicalcategory[]Arrayscategory[]Stringscategory[]Hash#

// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    int bunkDays(int N, int M, int K){
        // code here
        if(N==K or (N+K/M)>=K)
        return 0;
        if(K%M==0)
        return K-(N+(K/M))+1;
        else
        return K-(N+(K/M));
    
        
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int  N, M, K;
        cin >> N >> M >> K;
        Solution ob;
        cout<<ob.bunkDays(N,M,K)<<endl;
    }
    return 0;
}
  // } Driver Code Ends
