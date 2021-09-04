Link for Ques:
https://atcoder.jp/contests/abc217/tasks/abc217_c

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

      int n;
      cin>>n;
      
      int arr[n]{0};
      int res[n]{0};
      for(int i=0;i<n;i++)
      {
            cin>>arr[i];
      }
      
      for(int i=0;i<n;i++)
      {
            res[arr[i]-1]=i+1;
      }
      
      for(auto it:res)
      {
          cout<<it<<" ";
      }
      cout<<endl;
         
      
}


     
