Link for QUes:
https://codeforces.com/problemset/problem/1399/A

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
           map<int,int>umap;
           int x;
           for(int i=0;i<n;i++)
           {
                 cin>>x;
                 umap[x]++;
           }
           if(umap.size()==1)
           {
               cout<<"YES"<<endl;
           }
           else
           {   auto it=umap.begin();
                auto ip=umap.begin();
                ip++;
                int flag=0;
                for(;ip!=umap.end();it++,ip++)
                {
                    if(ip->first-it->first>1)
                       {
                           cout<<"NO"<<endl;
                            flag++;
                            break;
                       }
                }
                ip--;
                if(flag==0)
                {
                if(ip->first-it->first>1)
                 {
                     cout<<"NO"<<endl;
                 }
                 else
                 {
                     cout<<"YES"<<endl;
                 }
                }
                
               
           }
     }
}
