Link for Question:
https://practice.geeksforgeeks.org/problems/ways-to-split-string-such-that-each-partition-starts-with-distinct-letter5723/1/?category[]=Mathematical&category[]=Arrays&category[]=Strings&category[]=Hash&category[]=Mathematical&category[]=Arrays&category[]=Strings&category[]=Hash&problemStatus=unsolved&problemType=functional&page=1&sortBy=newest&query=category[]Mathematicalcategory[]Arrayscategory[]Stringscategory[]HashproblemStatusunsolvedproblemTypefunctionalpage1sortBynewestcategory[]Mathematicalcategory[]Arrayscategory[]Stringscategory[]Hash#

#include <bits/stdc++.h>
#include <string>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    int waysToSplit(string s) {
        // code here
         unordered_map<char,int>umap;
         
       
         for(int i=0;i<s.size();i++)
         {
           
             umap[s.at(i)]++;
         }
         umap[s.at(0)]=1;
        long long int res=1;
         for(auto it:umap)
         {
            res=((res%1000000007)*(it.second%1000000007))%1000000007;  
         }
         return (res%1000000007);
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string S;
        cin>>S;

        Solution ob;
        cout<<ob.waysToSplit(S)<<endl;
    }
    return 0;
}  // } Driver Code Ends
