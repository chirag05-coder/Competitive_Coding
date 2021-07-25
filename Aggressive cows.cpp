#include<iostream>
using namespace std;
bool CanPlaceCow(int stalls[],int n,int c,int min_sep)
{      int last_cow=stalls[0];
       int cnt=1;
	for(int i=1;i<n;i++)
	{       if(stalls[i]-last_cow>=min_sep)
	           {  last_cow=stalls[i];
			         cnt++;       
			   }
			  if(cnt==c)
			      return true; 
	}
	return false;
}
int main()
{   int n=5;
     int stalls[]={1,2,4,8,9};
     int cows=3;
     int s=0;
     int end=stalls[n-1]-stalls[0];
     int ans=1;
	 while(s<=end)
     {   int mid=(s+end)/2;
          bool cowRakhPaaye=CanPlaceCow(stalls,n,cows,mid);
		  if(cowRakhPaaye)
		  {   ans=mid;
		       s=mid+1;
		   } 
		   else
		   end=mid-1;
		  
		  
		  
		  }
	cout<<ans;	  
}
