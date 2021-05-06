Link for Ques:
https://practice.geeksforgeeks.org/problems/woodall-number2349/1/?problemStatus=unsolved&page=1&sortBy=newest&category[]=Mathematical&category[]=Arrays&category[]=Strings&category[]=Hash&category[]=Stack&category[]=Bit%20Magic&category[]=Recursion&category[]=sliding-window&query=problemStatusunsolvedpage1sortBynewestcategory[]Mathematicalcategory[]Arrayscategory[]Stringscategory[]Hashcategory[]Stackcategory[]Bit%20Magiccategory[]Recursioncategory[]sliding-window


// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int isWoodall(int N){
        // code here
        for(int i=1;i<N/2;i++)
        {  int x=pow(2,i);
             if((i*x-1)==N)
             {
                 return 1;
             }
        }
        return 0;
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        
        Solution ob;
        cout<<ob.isWoodall(N)<<"\n";
    }
    return 0;
}  // } Driver Code Ends
