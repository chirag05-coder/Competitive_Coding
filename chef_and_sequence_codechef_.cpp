Link for QUes:




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
