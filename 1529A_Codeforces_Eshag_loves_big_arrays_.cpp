Link for Ques:
https://codeforces.com/problemset/problem/1529/A

#include<bits/stdc++.h>
#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define lli long long int
using namespace std;
const int M=1e9+7;
lli power(lli a,lli b)
{
     if(b==0 )
        return 1;
       if(b==1)
       return a;
     
      if(!(b&1)) 
      return (power(a,b/2)%M)*(power(a,b/2)%M);
      else
      return ((a)*(power(a,b/2)%M)%M)*(power(a,b/2)%M);

}

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
         while(n--)
         {
              cin>>x;
              umap[x]++;
         }
         int cnt=0,ans=0;
         for(auto it:umap)
         {
               if(cnt!=0)
               {
                   ans+=it.second;
               }
               cnt++;
         }
         cout<<ans<<endl;
     }

     
}
