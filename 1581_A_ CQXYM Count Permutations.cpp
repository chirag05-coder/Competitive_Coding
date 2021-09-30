Link for Ques:
https://codeforces.com/contest/1581/problem/A


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
lli result[10000000] = {0};


int main()
{    fastio;
     
  int t;
  cin>>t;
  while(t--)
  {
      lli n;
      cin>>n;
      n=(n*2);
      
      lli res=1;
        for(lli i =3;i<=n;i++)
         {
                 res=res*1LL*i;
                 res%=M;
         }
         cout<<res<<endl;
  }
            
      

     

}
