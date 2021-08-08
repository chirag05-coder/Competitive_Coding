// Link for Ques:
https://codeforces.com/problemset/problem/1220/A


#include<bits/stdc++.h>
#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define lli long long int

using namespace std;
int main()
{    fastio;
  int n;
  cin>>n;
  string str;
  cin>>str;
 unordered_map<char,int>umap;
 for(int i=0;i<str.length();i++)
 {
        umap[str.at(i)]++;
        
 }
  if(umap.find('n')==umap.end())
  {
      int x=umap['z'];
       while(x--)
       {
           cout<<"0 ";
       }
  }
  else
  {   int x=umap['n'];
       while(x--)
       {
           cout<<"1 ";
       }
       if(umap.find('z')!=umap.end())
        {
             int a=umap['z'];
             while(a--)
             {
                 cout<<"0 ";
             }
        }
      
  }
  
  
     
}
