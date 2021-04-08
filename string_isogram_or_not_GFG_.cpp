Link For Ques:
https://practice.geeksforgeeks.org/problems/check-if-a-string-is-isogram-or-not-1587115620/1


#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


class Solution{
  public:
    //Complete this function
    bool isIsogram(string s)
    {
        //Your code here
        set<char>st;
        for(int i=0;i<s.length();i++)
             st.insert(s.at(i));
    
    if(st.size()==s.length())
    return true;
    else 
    return false;

    }
    };

// { Driver Code Starts.

int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        
        string s;
        cin>>s;
        Solution obj;
        cout<<obj.isIsogram(s)<<endl;
        
    }
	return 0;
}  // } Driver Code Ends
