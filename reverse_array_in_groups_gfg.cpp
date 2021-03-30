Link for Question:
https://practice.geeksforgeeks.org/problems/reverse-array-in-groups0255/1/?category[]=Mathematical&category[]=Arrays&category[]=Strings&category[]=Hash&category[]=logical-thinking&category[]=Mathematical&category[]=Arrays&category[]=Strings&category[]=Hash&category[]=logical-thinking&problemStatus=unsolved&problemType=functional&page=1&sortBy=submissions&query=category[]Mathematicalcategory[]Arrayscategory[]Stringscategory[]Hashcategory[]logical-thinkingproblemStatusunsolvedproblemTypefunctional

//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++

class Solution{
public:
    //Function to reverse every sub-array group of size k.
    void reverseInGroups(vector<long long>& v, int n, int k){
        // code here
         if(n==k)
      reverse(v.begin(),v.end());
      else
      {
          int j=0;
     
      for(int i=0;i<n;i+=k)
      {
          if(i+k>n)
          {
              j=n;
          }
          else
          {
              j=i+k;
          }
          reverse(v.begin()+i,v.begin()+j);
      }
      }
    }
};

// { Driver Code Starts.
int main() {
    int t; 
    cin >> t; 
    while(t--){ 
        int n;
        cin >> n; 
        vector<long long> arr; 
        int k;
        cin >> k; 

        for(long long i = 0; i<n; i++)
        {
            long long x;
            cin >> x; 
            arr.push_back(x); 
        }
        Solution ob;
        ob.reverseInGroups(arr, n, k);
        
        for(long long i = 0; i<n; i++){
            cout << arr[i] << " "; 
        }
        cout << endl;
    }
}

  // } Driver Code Ends
