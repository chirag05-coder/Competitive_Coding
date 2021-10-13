Link for Ques:
https://codeforces.com/contest/1593/problem/A


#include<bits/stdc++.h>
#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define lli long long int
using namespace std;
const long long int mod=1e9+7;


signed main()
{    fastio;

        
           int t;
           cin>>t;
           while(t--)
           {
                  lli a,b,c;
                  cin>>a>>b>>c;
                  
                  set<lli>st;
                  st.insert(a);
                  st.insert(b);
                  st.insert(c);
                  
                  unordered_map<lli,int>umap;
                  umap[a]++;
                  umap[c]++;
                  umap[b]++;
                  int cnt=0;
                  
                  if(a==b and b==c)
                  {
                        cout<<1<<" "<<1<<" "<<1<<endl;
                  }
                  else
                  {
                             if(a!=(*st.rbegin()))
                             cout<<(*st.rbegin()-a)+1<<" ";
                             else
                             {   if(umap[(*st.rbegin())]>1)
                                   cout<<"1 ";
                                   else
                                   cout<<0<<" ";
                              
                             
                             }
                             
                              if(b!=(*st.rbegin()))
                             cout<<(*st.rbegin()-b)+1<<" ";
                             else
                             {   if(umap[(*st.rbegin())]>1)
                                   cout<<"1 ";
                                   else
                                   cout<<0<<" ";
                              
                             
                             }
                             
                              if(c!=(*st.rbegin()))
                             cout<<(*st.rbegin()-c)+1<<" ";
                              else
                             {   if(umap[(*st.rbegin())]>1)
                                   cout<<"1 ";
                                   else
                                   cout<<0<<" ";
                              
                             
                             }
                             
                             cout<<endl;
                             
                         
                           
                  }
                  
           }
       
}



     
