#include<iostream>
using namespace std;
int profit(int n, int c,int *price,int *weight)
{   if(n==0 || c==0)
         return 0;
     int ans=0,inc=0,exc=0;
	 if(c>=weight[n-1])
	    {  inc= price[n-1] +profit(n-1,c-weight[n-1],price,weight);
	 }
	 exc=profit(n-1,c,price,weight);
	 ans=max(inc,exc);
	 return ans;    
}
int main()
{   int weights[]={1,2,3,5};
     int price[]={40,20,30,100};
     int n=4;
     int c=7;
     cout<<profit(n,c,price,weights);
	
}
