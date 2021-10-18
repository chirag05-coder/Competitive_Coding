Link for Ques:
https://codeforces.com/contest/1583/problem/B


#include<bits/stdc++.h>
#define endl "\n"

using namespace std;


int main()
{  
      int t;
      cin>>t;
      while(t--)
      {
      
        int n,q;
        cin>>n>>q;
        set<int>st;
        for(int i=0;i<n;i++)
        st.insert(i+1);
        
        while(q--)
        {
            int a,b,c;
            cin>>a>>b>>c;
            st.erase(b);
        }
        int val=(*st.rbegin());
        
        for(int i=1;i<=n;i++)
        {
            if(i!=val)
            cout<<val<<" "<<i<<endl;
        }

               
              
      }
      
       
    
}



     
