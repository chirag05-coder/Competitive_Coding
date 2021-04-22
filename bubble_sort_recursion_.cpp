
#include<iostream>
#include<algorithm>
using namespace std;
void bubble_sort(int arr[],int j,int n)
{     if(n==1)
        return ;
      if(j==n-1)
      {   return bubble_sort(arr,0,n-1);
	  }
	  if(arr[j]>arr[j+1])
	   {  swap(arr[j],arr[j+1]);
	   }
	   return bubble_sort(arr,j+1,n);
	
}
int main()
{   int n;
     cin>>n;
     int arr[n]{0};
     for(int i=0;i<n;i++)
       cin>>arr[i];
    bubble_sort(arr,0,n);
    for(auto k:arr)
       cout<<k<<" ";
}
