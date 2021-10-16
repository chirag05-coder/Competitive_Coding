Link for Ques:
https://codeforces.com/contest/110/problem/A


#include<bits/stdc++.h>
#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define lli long long int
using namespace std;
const int M=1e9+7;


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
