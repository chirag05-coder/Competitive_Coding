Link for Ques:
https://codeforces.com/problemset/problem/978/B

#include<bits/stdc++.h>
#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define lli long long int

using namespace std;
int main()
{    fastio;
  int n;
  cin>>n;
  string str;
  cin>>str;
  char ch='x';
  int ans=0,cnt=0;
  for(int i=0;i<str.length();i++)
  {    if(str.at(i)==ch)
         {
             cnt++;
         }
          else
        cnt=0;
         if(cnt>=3)
          ans++;
       
      
  }
  cout<<ans<<endl;
  
     
}
