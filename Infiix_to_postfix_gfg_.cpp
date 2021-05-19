Link for Ques:
https://practice.geeksforgeeks.org/problems/infix-to-postfix-1587115620/1

// C++ implementation to convert infix expression to postfix
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends




class Solution
{
    public:
    //Function to convert an infix expression to a postfix expression.
    int prec(char c)
    {
          if(c=='^')
            return 3;
         else if(c=='*' or c=='/')
            return 2;
         else if(c=='+' or c=='-')
             return 1;
            
       else
       return -1;         
    }
    string infixToPostfix(string s)
    {    string res;
     stack<char>st;
          if(s.at(0)!='(')
          {
              st.push('(');
              s.push_back(')');
          }
          
        
         for(int i=0;i<s.length();i++)
         {
             
               if((s.at(i)>='a' and s.at(i)<='z') or (s.at(i)>='A' and s.at(i)<='Z'))
               {
                     res.push_back(s.at(i));
               }
               else if(s.at(i)=='(')
               {
                     st.push(s.at(i));
               }
               else if(s.at(i)==')')
               {
                      while(!st.empty() and st.top()!='(')
                      {
                          res.push_back(st.top());
                          st.pop();
                      }
                      if(!st.empty())
                      st.pop();
               }
               else
               {    
                    while((!st.empty() and prec(s.at(i))<=prec(st.top())))
                     {
                          res.push_back(st.top());
                          st.pop();
                     }
                     
                     st.push(s.at(i));
               
                     
               }
         }
         while(!st.empty())
         {
              res.push_back(st.top());
              st.pop();
         }
         return res;
         
        
    }
};


// { Driver Code Starts.
//Driver program to test above functions
int main()
{
    int t;
    cin>>t;
    cin.ignore(INT_MAX, '\n');
    while(t--)
    {
        string exp;
        cin>>exp;
        Solution ob;
        cout<<ob.infixToPostfix(exp)<<endl;
    }
    return 0;
}
  // } Driver Code Ends
