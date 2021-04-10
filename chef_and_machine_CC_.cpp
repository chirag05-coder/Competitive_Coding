Link For Ques:
https://www.codechef.com/RTR2021/problems/CMACHINE


#include<bits/stdc++.h>
#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define lli long long int

using namespace std;
lli fact(lli x)
{     if(x==0 or x==1)
         return 1;
         
    return x*fact(x-1);     
    
}
int main()
{    fastio;
int t;
cin>>t;
while(t--)
{
    lli num;
    cin>>num;
    cout<<fact(num)<<endl;
}
     
}
