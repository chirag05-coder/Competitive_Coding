Link for Ques:
https://codeforces.com/contest/365/problem/B


#include<bits/stdc++.h>
#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define lli long long int
using namespace std;
const int M=1e9+7;
lli power(lli a,lli b)
{
     if(b==0 )
        return 1;
       if(b==1)
       return a;
     
      if(!(b&1)) 
      return (power(a,b/2)%M)*(power(a,b/2)%M);
      else
      return ((a)*(power(a,b/2)%M)%M)*(power(a,b/2)%M);

}

int main()
{    fastio;
    
      int n;
      cin>>n;
      int arr[n]{0};
      for(int i=0;i<n;i++)
      {
          cin>>arr[i];
      }
      int len=1;
      int ans=INT_MIN;
      int flag=0;
      for(int i=2;i<n;i++)
      {
                if(arr[i]==arr[i-1]+arr[i-2])
                 {
                       if(flag==0)
                        {
                            len+=2;
                        }
                        else
                        len++;
                        flag++;
                 }
                 else
                 {
                     ans=max(ans,len);
                     len=1;
                     flag=0;
                 }
      }
       ans=max(ans,len);
       if(n>1 and ans==1)
         cout<<2<<endl;
         else
      cout<<ans<<endl;
      

     
}
