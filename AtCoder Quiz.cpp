Link for ques:
https://atcoder.jp/contests/abc217/tasks/abc217_b



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

     unordered_set<string>st;
      st.insert("ABC");
       st.insert("ARC");
        st.insert("AGC");
         st.insert("AHC");
         
         
         string a,b,c;
         cin>>a>>b>>c;
         
         st.erase(a);
         st.erase(b);
         st.erase(c);
         
         cout<<*(st.begin())<<endl;
         
      
}


     
