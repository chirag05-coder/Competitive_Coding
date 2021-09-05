Link for Ques:
https://codeforces.com/contest/1567/problem/B


#include<bits/stdc++.h>
#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define lli long long int
using namespace std;
const int M=1e9+7;


int main()
{    fastio;
     int arr[1000000]{0};
     lli xorr=0;
     for(int i=1;i<1000000;i++)
       {
           xorr=(xorr^i);
           arr[i]=xorr;
       }
    int t;
    cin>>t;
    while(t--)
    {
         lli mexx,b;
       cin>>mexx>>b;
      
     
    
     if(mexx==1 and b==1)
     cout<<"3"<<endl;
     else if(arr[mexx-1]==b)
     cout<<mexx<<endl;
     else if((arr[mexx-1]^b)==mexx)
     cout<<mexx+2<<endl;
     else
     cout<<mexx+1<<endl;
    }
}


     
