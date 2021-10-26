Link for Ques:
https://codeforces.com/contest/1602/problem/B


#include<bits/stdc++.h>
#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define lli long long int
using namespace std;
const int M=1e9+7;

void traverse(map<int,int>&ump,vector<int>v)
  {
      for(int i=0;i<v.size();i++)
      ump[v[i]]++;
  }
  
 vector<int> disttance(map<int,int>&ump,vector<int>v, map<vector<int>,int>&st)
  {
      vector<int>oth;
      for(int i=0;i<v.size();i++)
            {
                oth.push_back(ump[v[i]]);
            }
           
            
            return oth;
  }


int main()
{    fastio;
      int t;
     cin>>t;
    while(t--){
         int n;
            cin>>n;
            vector<int>inp(n,0);
            map<int,int>umap;
            for(int i=0;i<n;i++)
            {
                cin>>inp[i];
                umap[inp[i]]++;
            }
             vector<int>vec;
            vector<vector<int>>res;
            
            map<vector<int>,int>st;
            int len=st.size();
            res.push_back(inp);
            st[inp]++;
            for(int i=0;i<n;i++)
            {
                vec.push_back(umap[inp[i]]);
            }
            
            st[vec]++;
            while(true)
            {
                
                res.push_back(vec);
                umap.clear();
                traverse(umap,vec);
                vec=disttance(umap,vec,st);
                if(st.find(vec)!=st.end())
                break;
                else
                  st[vec]++;
                
            }
            
           int q;
           cin>>q;
           while(q--)
           {
               int x,y;
               cin>>x>>y;
               if(y<res.size())
               cout<<res[y][x-1]<<endl;
               else
               cout<<res[res.size()-1][x-1]<<endl;
           }
          
         
           
     }
}



     
