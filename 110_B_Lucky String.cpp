Link for Ques:
https://codeforces.com/contest/110/problem/B


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

      int n;
      cin>>n;
      string str="abcd";
      int x=str.length();
      int val=n/x;
      if(val>=1)
      {
          string res="";
          while(val--)
          {
               res+=str;
          }
          int rem=n%x;
          if(rem>0)
          res+= str.substr(0,rem);
          cout<<res<<endl;
      }
      else
      {
           cout<<str.substr(0,n);
      }

     
}
