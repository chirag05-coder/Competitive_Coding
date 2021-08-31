Link for Ques:
https://codeforces.com/problemset/problem/514/A


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
     lli i=0;
     if(str.at(0)=='9')
          {
                 i=1;
          }
   for(;i<str.length();i++)
  {      
         int n= str.at(i)-'0';
            if(9-n<5)
             {
                char ch=(9-n)+'0';
                str.at(i)=ch;
             }
   }
   cout<<str<<endl;

     
      
}


     
