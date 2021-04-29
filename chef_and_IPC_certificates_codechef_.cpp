Link for Ques:
https://www.codechef.com/problems/IPCCERT




#include<bits/stdc++.h>
#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define lli long long int

using namespace std;
int main()
{    fastio;
     int n,m,k;
     cin>>n>>m>>k;
     int c=0;
     while(n--)
     {int sum=0;
     int arr[k+1];
     for(int i=0;i<k+1;i++)
     {    cin>>arr[i];
         sum+=arr[i];
         
     }
     sum-=arr[k];
     if(sum>=m and arr[k]<=10)
      c++;
     }
     cout<<c<<endl;
}
