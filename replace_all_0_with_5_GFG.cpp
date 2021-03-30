Link for Question:

https://practice.geeksforgeeks.org/problems/replace-all-0s-with-5/1/?problemStatus=unsolved&problemType=functional&page=1&sortBy=submissions&category[]=Mathematical&category[]=Arrays&category[]=Strings&category[]=Hash&category[]=logical-thinking&query=problemStatusunsolvedproblemTypefunctionalpage1sortBysubmissionscategory[]Mathematicalcategory[]Arrayscategory[]Stringscategory[]Hashcategory[]logical-thinking#


#include <bits/stdc++.h>
using namespace std;

int convertFive(int n);

// Driver program to test above function
int main() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        cout << convertFive(n) << endl;
    }
}// } Driver Code Ends


/*you are required to complete this method*/
int convertFive(int n) {
     string str=to_string(n);
     for(int i=0;i<str.length();i++)
      {
          if(str.at(i)=='0')
             str.at(i)='5';
      }
      int x=stoi(str);
      return x;
    // Your code here
}
