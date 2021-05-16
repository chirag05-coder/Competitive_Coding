#include<iostream>
using namespace std;
int main()
{ int n;
  cout<<"Enter number of lines: ";
  cin>>n;
  for(int i=1;i<=n;i++)
   {  for(int j=1;j<=n;j++)
   {  if(i==1)
      {    if(j==1 || (j>=(n+1)/2 &&j<=n))
	         cout<<"*";
	         else
	         cout<<" ";
	  }
	   else if(i<(n+1)/2)
	    {  if(j==1 || j==(n+1)/2)
	        cout<<"*";
	        else
	        cout<<" ";
		}
		else if(i==(n+1)/2)
		  cout<<"*";
		 else if(i>(n+1)/2 &&i<n)
		    {   if(j==(n+1)/2 ||j==n)
			        cout<<"*";
					else
					cout<<" "; 
			 }
		else
		{   if((j>=1 && j<=(n+1)/2) || j==n )
			  cout<<"*";
			  else
			  cout<<" ";
			  }	  
   }
    cout<<endl;
   }
}
