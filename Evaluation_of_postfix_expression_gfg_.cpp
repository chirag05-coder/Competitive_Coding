Link for Ques:
https://practice.geeksforgeeks.org/problems/evaluation-of-postfix-expression1735/1#


// C++ program to evaluate value of a postfix expression
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends



class Solution
{
    public:
    //Function to evaluate a postfix expression.
    int evaluatePostfix(string str)
    {
        // Your code here
         stack<int>st;
    int res=0,x;
       for(int i=0;i<str.length();i++)
        {     char ch=str.at(i);
               if(ch>='0' and ch<='9')
               {
                    x=ch-'0';
                    st.push(x);
                   
               }
               else
               {  int op1=st.top();
                    st.pop();
                    int op2=st.top();
                    st.pop();
                    switch(ch)
                    {
                    case '+' :
                     
                         res=op2+op1;
                         st.push(res);
                           break;
                     case '-':
                     
                           res=op2-op1;
                           st.push(res);
                            break;
                     case '*':
                     
                         res=op2*op1;
                          st.push(res);
                          break;
                     
                     case '/':
                     
                         res=op2/op1;
                         st.push(res);
                         break;
                     case '^':
                       st.push(pow(op2,op1));
                       break;
                     
                    }
               }
               
            
        }
        res=st.top();
        return res;
    }
};

// { Driver Code Starts.

// Driver program to test above functions
int main()
{
    int t;
    cin>>t;
    cin.ignore(INT_MAX, '\n');
    while(t--)
    {
        string S;
        cin>>S;
        Solution obj;
    
    cout<<obj.evaluatePostfix(S)<<endl;
    }
    return 0;
}
  // } Driver Code Ends
