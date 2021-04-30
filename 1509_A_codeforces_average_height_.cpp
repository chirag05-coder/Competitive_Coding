Link for Ques:
https://codeforces.com/problemset/problem/1509/A


#include<bits/stdc++.h>
#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define lli long long int

using namespace std;
bool cmp(int a, int b)
{
   
   if (a % 2 == 0 && b % 2 == 0)
       return a < b;

   if (a % 2 != 0 && b % 2 != 0)
       return b < a;


   if (a % 2 != 0)
       return true;

   return false;
}
int main()
{    fastio;
lli t;
cin>>t;
while(t--)
{
    int n;
    cin>>n;
     int arr[n]{0};
     
     for(auto &it:arr)
       cin>>it;
      sort(arr,arr+n,cmp);
      for(auto it:arr)
      cout<<it<<" ";
      cout<<endl;
}
     
}
