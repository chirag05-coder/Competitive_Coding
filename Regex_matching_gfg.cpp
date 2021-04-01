Link for Question:

https://practice.geeksforgeeks.org/problems/-regex-matching1145/1#

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    int isPatternPresent(string s, string p) {
        // code here
        int len=p.length();
        if(p.at(0)=='^')
        {
           size_t found=s.find(p.substr(1));
           if(found==0)
             return 1;
            else
            return 0;
        }
        else if(p.at(len-1)=='$')
        {      p.pop_back();
            int found=s.rfind(p);
           // cout<<found<<" "<<s.length()-len-1<<endl;
           if(found==(s.length()-len+1))
             return 1;
            else
            return 0;
        }
        else
        {size_t found=s.find(p);
           if(found!=string::npos)
             return 1;
            else
            return 0;
            
        }
        
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string P,S;

        cin>>P;
        cin>>S;

        Solution ob;
        cout << ob.isPatternPresent(S,P) << endl;
    }
    return 0;
}  // } Driver Code Ends
