Link for Ques:
https://codeforces.com/problemset/problem/1296/A

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
int arr[n]{0};
 unordered_map<int,int>umap;
for(int i=0;i<n;i++)
{
      cin>>arr[i];
      umap[arr[i]]++;
}
if(umap.size()==1)
{
    for(auto it:umap)
    {    int a=it.first;
          int b=it.second;
        if((a&1)  and  (b&1))
          cout<<"YES"<<endl;
          else 
           cout<<"NO"<<endl;
    }
    
       
    
}
else
{   int cnt=0,sum=0;
     for(auto it:umap)
      {
          if((it.first)&1)
            {//cout<<"Yes"<<endl;
            cnt++;
            sum+=it.second;
            }
      }
      if(cnt==0 or (cnt==umap.size() and sum%2==0))
      cout<<"NO"<<endl;
      else
      cout<<"YES"<<endl;
    
}

    
}
     
}
