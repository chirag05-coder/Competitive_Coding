Link for Ques:
https://codeforces.com/problemset/problem/4/C


#include<bits/stdc++.h>
#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define lli long long int

using namespace std;
int main()
{    fastio;
int n;
cin>>n;
unordered_map<string,int>umap;
while(n--)
{
string str;
   cin>>str;
   if(umap.find(str)==umap.end())
   {    cout<<"OK"<<endl;
         umap[str]++;
       
   }
   else
   {
       cout<<str<<umap[str]<<endl;
       umap[str]++;
   }
   
     
}
}
