Link for Ques:
https://codeforces.com/problemset/problem/1462/A




#include<bits/stdc++.h>
#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define lli long long int

using namespace std;

int main()
{    fastio;
   int t;
   cin>>t;
   while(t--)
   {
       int n;
       cin>>n;
       vector<int> v(n,0);
       for(auto &it:v)
           cin>>it;
          
        int j=v.size()-1;
        for(int i=0;i<v.size();i++)
        {    if(i&1)
           { v.insert(v.begin()+i,v[j]);
            v.pop_back();
           }
               
           }
        for(auto it:v)
        cout<<it<<" ";
        cout<<endl;
        
          
       
   }
   
   
    
   
    
}
