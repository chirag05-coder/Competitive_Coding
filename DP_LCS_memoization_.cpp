#include<bits/stdc++.h>
#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define lli long long int

using namespace std;
int memo[1000][1000];
int lcs(string a,string b,int m,int n )
{
         if(memo[m][n]!=-1)
          return memo[m][n];
         if(m==0 || n==0)
          memo[m][n]= 0;
          else
          {
         if(a[m-1]==b[n-1])
          {
              memo[m][n]= 1 +lcs(a,b,m-1,n-1);
          }
          else
           memo[m][n]= max(lcs(a,b,m-1,n),lcs(a,b,m,n-1));
          } 
         return memo[m][n];           
}  
int main()
{    fastio;
   string a,b;
   cin>>a>>b;
   int m=a.length(),n=b.length();
   //int memo[m+1][n+1]={0};
   memset(memo,-1,sizeof(memo));
   cout<<lcs(a,b,m,n);
   
   
    
   
    
}
