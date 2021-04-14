#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
int main()
{   long long int n,product=1;
 cin>>n;
   int ans;
 long long int arr[n]{0};
    for(int i=0;i<n;i++)
      {  cin>>arr[i];
          product=product*arr[i];
		}  
		sort(arr,arr+n);
      int start=arr[0],end=arr[n-1];
      while(start<end)
      {    int mid=(start+end)/2;
           if(pow(mid,n)>product)
            {   ans=mid;
                  end=mid+1;
			}
			else
			start=mid+1;
		   
      	
	  }
	  cout<<ans;




}
