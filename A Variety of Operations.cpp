Link for Ques:
https://codeforces.com/contest/1556/problem/A


#include<bits/stdc++.h>
#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define lli long long int
using namespace std;
const int M=1e9+7;
int main()
{    fastio;
 int t;
 cin>>t;
 while(t--)
 {
        int c,d;
        cin>>c>>d;
        int difference=abs(c-d);
        if(c==0 and d==0)
        cout<<"0"<<endl;
        
        else if(difference==0)
        cout<<"1"<<endl;
        
        else if(difference&1)
        cout<<"-1"<<endl;
        
        else 
            cout<<"2"<<endl;
 }
     
      
}


     
