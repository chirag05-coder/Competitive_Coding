#include<iostream>
using namespace std;
void merge(int arr[],int s,int end)
{      static int count =0;
         count++;
		 cout<<"count: Merge "<<count<<endl; 
     int mid=(s+end)/2;

      int i=s;
      int j=mid+1;
      int k=s;
      int temp[100]{0};
      while(i<=mid && j<=end)
       {     if(arr[i]<arr[j])
                 {       temp[k++]=arr[i++];
				 }
			  else
			  {   temp[k++]=arr[j++];
				   }	 
       	
	   }
	   while(i<=mid)
	   {    temp[k++]=arr[i++];
	   }
	   while(j<=end)
	   {   temp[k++]=arr[j++];
	   }
	   
	   for(int i=s;i<=end;i++)
	       arr[i]=temp[i];
	   
	
}


void merge_sort(int arr[],int s,int end)
{    
      if(s>=end)
        return ;
//        static int count =0;
//         count++;
//		 cout<<"count: Mergesort "<<count<<endl; 
     int mid=(s+end)/2;
     merge_sort(arr,s,mid);
     merge_sort(arr,mid+1,end);
     
     merge(arr,s,end);
	
}
int main()
{    int n;
      cin>>n;
      int arr[n]{0};
      for(int i=0;i<n;i++)
          cin>>arr[i];
       int start=0,end=n-1;
         merge_sort(arr,start,end);
         
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
}
