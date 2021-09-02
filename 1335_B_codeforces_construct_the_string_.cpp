// 
Link for QUes:
https://codeforces.com/problemset/problem/1335/B


#include<bits/stdc++.h>
#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define lli long long int

using namespace std;

int main()
{    fastio;
    int t;
   cin>>t;
   while(t--){
       int n,a,b;
       cin>>n>>a>>b;
       string str;
       for(int i=97;i<97+b;i++)
       {
           str.push_back(char(i));
       }
       while(str.size()<n)
       {
           str+=str;
       }
       while(str.size()!=n)
       {
           str.pop_back();
       }
       cout<<str<<"\n";
   }
    
   
    
}
