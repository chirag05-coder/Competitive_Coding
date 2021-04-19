Link for Ques:
https://codeforces.com/problemset/problem/1360/B



#include<bits/stdc++.h>
#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define lli long long int

using namespace std;
int main()
{    fastio;
int t;
cin>>t;
while(t--)
{
int n;
cin>>n;
 set<int>st;
 int x;
 for(int i=0;i<n;i++)
 {   cin>>x;
     st.insert(x);
 }
 if(st.size()!=n)
 {
     cout<<"0"<<endl;
 }
 else
 {
     auto it=st.begin();
     it++;
     int mini=INT_MAX;
     auto ip=st.begin();
     for(;it!=st.end();it++,ip++)
     {
         mini=min(mini,((*it)-(*ip)));
     }
     cout<<mini<<endl;
 }
    
}
     
}
