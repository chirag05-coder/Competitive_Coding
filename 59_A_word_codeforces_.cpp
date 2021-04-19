Link for Ques:
https://codeforces.com/problemset/problem/59/A

#include<bits/stdc++.h>
#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define lli long long int

using namespace std;
int main()
{    fastio;
string str;
   cin>>str;
   int l=0,u=0;
   for(int i=0;i<str.length();i++)
     {    if(str.at(i)>='a' and str.at(i)<='z')
               l++;
          else
          u++;
         
     }
     if(l>=u)
     {   for(int i=0;i<str.length();i++)
     {    if(str.at(i)>='A' and str.at(i)<='Z')
                 str.at(i)=str.at(i)+32;
          
         
     }
     }
     else
     {   for(int i=0;i<str.length();i++)
     {    if(str.at(i)>='a' and str.at(i)<='z')
                  str.at(i)=str.at(i)-32;
         
     }
         
     }
     cout<<str;
     
}
