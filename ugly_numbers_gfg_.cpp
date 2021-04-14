Link for Ques:
https://practice.geeksforgeeks.org/problems/ugly-numbers2254/1/?category[]=Arrays&category[]=Strings&category[]=Hash&category[]=Arrays&category[]=Strings&category[]=Hash&problemStatus=unsolved&problemType=functional&page=3&sortBy=submissions&query=category[]Arrayscategory[]Stringscategory[]HashproblemStatusunsolvedproblemTypefunctionalpage3sortBysubmissionscategory[]Arrayscategory[]Stringscategory[]Hash#

#include <bits/stdc++.h>

using namespace std;

#define ull unsigned long long


 // } Driver Code Ends
//User function template for C++
class Solution{
public:	
	// #define ull unsigned long long
	/* Function to get the nth ugly number*/
	ull getNthUglyNo(int n) {
	    // code here
	    set<ull>ust;
   ust.insert(1);
   n--;
   //set<ull>st;
 
   for(int i=0;i<n;i++)
   {
     
     
           auto it=ust.begin();
           auto ip=*it;
           ust.erase(it);
   
           ust.insert((ip)*2);
           ust.insert((ip)*3);
           ust.insert((ip)*5);
           
           
   }
       
   

   return *ust.begin();
	}
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        auto ans = ob.getNthUglyNo(n);
        cout << ans << "\n";
    }
    return 0;
}
  // } Driver Code Ends
