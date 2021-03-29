Link for Question:

https://practice.geeksforgeeks.org/problems/leaders-in-an-array-1587115620/1/?category[]=Mathematical&category[]=Arrays&category[]=Strings&category[]=Hash&category[]=Mathematical&category[]=Arrays&category[]=Strings&category[]=Hash&problemStatus=unsolved&problemType=functional&page=1&sortBy=submissions&query=category[]Mathematicalcategory[]Arrayscategory[]Stringscategory[]HashproblemStatusunsolvedproblemTypefunctionalpage1sortBysubmissionscategory[]Mathematicalcategory[]Arrayscategory[]Stringscategory[]Hash#


 vector<int> leaders(int a[], int n){
       
        stack<int>st;
        st.push(a[0]);
        for(int i=1;i<n;i++)
        {  
             if((!st.empty()) and a[i]>st.top())
             {
            while((!st.empty()) and a[i]>st.top() )
             {st.pop();}
             st.push(a[i]);
             }
             else
                 st.push(a[i]);
             
             
        }
        vector<int>v;
        while(!st.empty())
        {
            v.push_back(st.top());
            st.pop();
        }
        reverse(v.begin(),v.end());
        return v;
        
    }
