Link for Ques:
https://codeforces.com/contest/34/problem/B


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

      int n,m;
      cin>>n>>m;
      int arr[n]{0};
      for(int i=0;i<n;i++)
      {
          cin>>arr[i];
      }
      sort(arr,arr+n);
      int sum=0,i=0;
      while(m--)
      {
             if(arr[i]<0)
              {
                  sum+=abs(arr[i]);
              }
              else
              break;
              i++;
      }
      cout<<sum<<endl;
      

     
}
