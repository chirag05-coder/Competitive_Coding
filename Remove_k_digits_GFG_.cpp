Link for Ques:
https://practice.geeksforgeeks.org/problems/remove-k-digits/1#


//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    string removeKdigits(string s, int k) {
        stack<char>st;
          if(s.at(0)!='0')
         st.push(s.at(0));
        for(int i=1;i<s.length();i++)
        {
              while(!st.empty() and s.at(i)=='0' and k>0)
              {
                     
                          st.pop();
                         k--;
                      
              }
             
                    while(!st.empty() and st.top()>s.at(i) and k>0)
                     {
                          st.pop();
                          k--;
                          //i++;
                     }
                     
                 
              st.push(s.at(i));
              
              if(st.size()==1 and st.top()=='0')
              {
                  st.pop();
              }
              
            
              
            
        }
        //cout<<"k"<<k<<endl;
       while(!st.empty() and k--)
       {
            st.pop();
       }
        s.clear();
       
        while(!st.empty())
        {
            s.push_back(st.top());
            st.pop();
        }
        if(s.size()==0)
        {
            return "0";
        }
        while(s.back()=='0')
         s.pop_back();
        reverse(s.begin(),s.end());
        
        return s;
}
};

// { Driver Code Starts.

int main() {
    int t;
    cin>>t;
    while(t--){
        string S;
        cin >> S;
        int K;
        cin >> K;
        Solution obj;
        cout<<obj.removeKdigits(S,K)<<endl;
    }
    return 0;
}
  // } Driver Code Ends
