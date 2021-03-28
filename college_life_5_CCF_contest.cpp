Link for ques:
https://www.codechef.com/START2B/problems/COLGLF5

#include<bits/stdc++.h>
#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define lli long long int

using namespace std;
int main()
{    fastio;
int t ;
cin>>t;
while(t--)
{
    int n,m;
    cin>>n>>m;
    int arr[n];
    int brr[m];
    map<int,char>umap;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        umap[arr[i]]='f';
    }
    for(int i=0;i<m;i++)
    {
        cin>>brr[i];
        umap[brr[i]]='c';
    }
     char ch='f';
     auto ip=umap.begin();
     ip++;
     int x=0,k=0;
    for(auto it:umap)
     {     if(it.second=='f' and x==0)
            {}
            else
            {x++;
           if(it.second!=ip->second)
            {
                k++;
            }
           
            }
             ip++;
         //cout<<it.first<<" "<<it.second<<endl;
     }
     cout<<k<<endl;
}
     
}
