Link for Ques:
https://codeforces.com/contest/110/problem/A


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

     string str;
     cin>>str;
     int cnt=0;
     for(int i=0;i<str.length();i++)
     {
           char ch=str.at(i);
           if(ch=='4' or ch=='7')
             cnt++;
     }
     if(cnt==4 or cnt==7)
      cout<<"YES";
      else
      cout<<"NO"<<endl;

     
}
