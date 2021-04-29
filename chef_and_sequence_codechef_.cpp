Link for QUes:
https://www.google.com/url?q=https://www.codechef.com/problems/CHFAR&sa=D&source=hangouts&ust=1619806462712000&usg=AFQjCNFslKX1j6bjPkDpko008Rqhp-QHEg



#include<iostream>
using namespace std;
int main()
{  
  int t;
  cin>>t;
  while(t--)
  {
      int n,k;
      cin>>n>>k;
      int arr[n]{0};
      int flag=0;
      for(int i=0;i<n;i++)
      {
          cin>>arr[i];
          if(arr[i]!=1)
          flag++;
      }
      if(flag>k)
      {
          cout<<"NO\n";
      }
      else
      cout<<"YES\n";
  }
}
