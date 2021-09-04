Link for Ques:
https://codeforces.com/contest/144/problem/A



#include<bits/stdc++.h>
#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define lli long long int
using namespace std;
const int M=1e9+7;

int isVowel(char ch)
{
    return (0x208222 >> (ch & 0x1f)) & 1;
    // same as (2130466 >> (ch & 31)) & 1;
}
int main()
{    fastio;

int n;
    cin>>n;
    int arr[n]{0};
    int min_pos=-1, mini=INT_MAX, max_pos=-1,maxi=INT_MIN;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i]<=mini)
        {
            mini=arr[i];
            min_pos=i;
        }
       if(arr[i]>maxi)
        {
            maxi=arr[i];
            max_pos=i;
        }
    }
    if(max_pos>min_pos)
    {
        int ans=max_pos+(n-1- min_pos)-1;
        cout<<ans<<"\n";
    }
    else
    cout<<max_pos+(n-1- min_pos)<<"\n";
 


     
      
}


     
