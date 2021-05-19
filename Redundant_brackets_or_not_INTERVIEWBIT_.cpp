Link for QUES:
https://www.interviewbit.com/problems/redundant-braces/


int Solution::braces(string str) {
    stack<int>st;
 
   bool ans=false;
       for(int i=0;i<str.length();i++)
        {     char ch=str.at(i);
               if((ch>='A' and ch<='Z') or (ch>='a' and ch<='z'))
               {
                   
                   
               }
               else if(ch=='(')
               {    st.push(ch);
            
               }
               else if(ch==')')
               {     if(st.top()=='(')
                       {
                           ans=true;
                       }
                     while(!st.empty() and st.top()!='(')
                      {
                          st.pop();
                          
                      }
                      if(!st.empty())
                      {
                          st.pop();
                      }
                    
               }
               else
               {
                   st.push(ch);
                   
               }
       
       }
       if(ans)
       return 1;
       return 0;
}
