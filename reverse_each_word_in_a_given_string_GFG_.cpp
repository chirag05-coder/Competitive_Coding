Link For Ques:
https://practice.geeksforgeeks.org/problems/reverse-each-word-in-a-given-string1001/1#


#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
  public:
    
    string reverseWords (string s)
    {   string str;
       stack<char>st;
       s.push_back('.');
       for(int i=0;i<s.length();i++)
       {      if(s.at(i)=='.')
              {   while(!st.empty())
                 {
                     str.push_back(st.top());
                     st.pop();
                 }
                 str.push_back('.');
                  
              }
              else
              st.push(s.at(i));
           
       }
       str.pop_back();
     reverse(str.begin(),str.end());
       return str;
    }
        
       
};

// { Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s; cin >> s;
        Solution ob;
        cout << ob.reverseWords (s) << endl;
    }
    return 0;
}

// Contributed By: Pranay Bansal
  // } Driver Code Ends
