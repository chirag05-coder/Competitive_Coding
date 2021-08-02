#include<iostream>
using namespace std;
int pivot_ele(int arr[],int s,int end)
{        int i=s-1;
          int j=s;
         int p=arr[end];
	     
	    for( ;j<end;j++)
        {     if(arr[j]<=p)
              {    i++;
                   swap(arr[i],arr[j]);
              	
			  }
        	
		}
		swap(arr[i+1],arr[end]);
		return i+1;
	
}
void quick_sort(int arr[],int s,int end)
{    if(s>=end)
        return;
     
     int p=pivot_ele(arr,s,end);
     quick_sort(arr,s,p-1);
     quick_sort(arr,p+1,end);
    
	
}
int main()
{     int n;
    cin>>n;
    int arr[n]{0};
    for(int i=0;i<n;i++)
        cin>>arr[i];
    quick_sort(arr,0,n-1);
    for(int i=0;i<n;i++)
      cout<<arr[i]<<" ";
}
