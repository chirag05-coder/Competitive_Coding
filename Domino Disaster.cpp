Link for Ques:
https://codeforces.com/contest/1567/problem/A



#include<bits/stdc++.h>
#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define lli long long int
using namespace std;
const int M=1e9+7;

int isVowel(char ch)
{
    return (0x208222 >> (ch & 0x1f)) & 1;
    // same as (2130466 >> (ch & 31)) & 1;
}
int main()
{    fastio;

    int t;
    cin>>t;
    while(t--)
    {
          int n;
          cin>>n;
          string str;
          cin>>str;
          string res;
          for(int i=0;i<n;i++)
          {
                 if(str.at(i)=='D')
                   {
                       res.push_back('U');
                   }
                  else if(str.at(i)=='U')
                   {
                       res.push_back('D');
                   }
                   else
                   res.push_back(str.at(i));
                   
          }
          cout<<res<<endl;
    }
}


     
