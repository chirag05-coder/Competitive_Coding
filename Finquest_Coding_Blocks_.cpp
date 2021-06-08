#include<iostream>
using namespace std;
int main() {
	 int t ;
	 cin>>t;
	 while(t>0)
	 {
	 long int n;
	  cin>>n;
	long int arr[n+1]{0};
	for(int i=0;i<n;i++)
	   cin>>arr[i];
	   int share=0,profit=0,cost=0,becha=0,ch=0;
	for(int i=0;i<n;i++)
	{       
	         if(arr[i+1]>=arr[i])
	            {   share=share+1;
				     cost=cost+arr[i];
				    becha=share*arr[i+1];
				  // profit=profit+becha-cost;
				    //cout<<profit<<" ";
				    ch++;
                }
                
              else
			  {  
			     profit=profit+becha-cost;
				 if(i+1==n-1)
              	  goto label;
				 
				 share=0;
				 cost=0;
			  }

	}
	    if(ch==n)
	  {     profit=becha-cost;
	  }
	  label:
	cout<<"Profit: "<<profit<<endl;
	 t--;
	 }
	return 0;
}
