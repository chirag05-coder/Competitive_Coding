#include<iostream>
#include<algorithm>
using namespace std;
int main()
{   int t;
     cin>>t;
     int x[1000]{0},y[1000]{0};
	while(t--)
	{   int w,h,n;
	      cin>>w>>h>>n;
	    for(int i=0;i<n;i++)
	    {    cin>>x[i];
	          cin>>y[i];
	    }
	   sort(x,x+n);
	   sort(y,y+n);
	   int dx=x[0]-1 ;
	   int dy=y[0]-1;
	   
	   for(int i=1;i<n;i++)
	   {  dx=max(dx,x[i]-x[i-1]-1);
	        dy=max(dy,y[i]-y[i-1]-1);
	   }
	    dx=max(dx,w-1-x[n-1]-1);
	    dy=max(dy,h-1-y[n-1]-1);
	    cout<<dx*dy<<endl;
		
	}
}
