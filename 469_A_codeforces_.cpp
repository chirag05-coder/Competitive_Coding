Link for Ques:
https://codeforces.com/problemset/problem/469/A


#include<bits/stdc++.h>
#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define lli long long int

using namespace std;
int main()
{    fastio;
    int n;
    cin>>n;
    int p;
    cin>>p;
    int x;
    unordered_set<int>st;
    for(int i=0;i<p;i++)
    {    cin>>x;
        st.insert(x);}
    cin>>p;
    for(int i=0;i<p;i++)
    {    cin>>x;
        st.insert(x);}
    
        
    if(st.size()==n)
    {
        cout<<"I become the guy."<<endl;
    }
    else
    {
        cout<<"Oh, my keyboard!"<<endl;
    }
        
     
}
