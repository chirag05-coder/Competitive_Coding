Link for question:
https://www.codechef.com/START2B/problems/NOBEL


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
    int n,m;
      cin>>n>>m;
      unordered_map<int,int>umap;
      int x;
      for(int i=0;i<n;i++)
      {
          cin>>x;
          umap[x]++;
      }
      if(umap.size()==m)
      {
          cout<<"No"<<endl;
      }
      else
      {
          cout<<"Yes"<<endl;
      }
}
     
}
