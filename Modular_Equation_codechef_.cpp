Link for Ques:
https://www.codechef.com/MAY21C/problems/MODEQ

#include<bits/stdc++.h>
#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//#define endl "\n"
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
     lli N,M;
       cin>>N>>M;
       lli res=0;
       unordered_map<lli,lli>umap;
      
      
       for(lli i=2;i<=N;i++)
       {  lli k=M%i;
          if(umap.find(k)!=umap.end())
            res+=umap[k]+1;
          else
          res+=1;
            for(lli j=k ;j<=N;j+=i)
             {
                  umap[j]++; 
             }
       }
       cout<<res<<endl;
}

     
}
