#include<iostream>
#include<algorithm>
using namespace std;
int makeChange(int *coins,int money,int i)
{   static int u=0; 
    if(money==0)
      {    return u;
	  }
	  int n=0;
	    	if(coins[i] <=money)
	    	{
			
	  n=n+(money/coins[i]);
	  money=money- n*(coins[i]);
	     u=u+n;
           }
	  return makeChange(coins,money,i+1);
	     
}
int main()
{   int coins[]={1,2,5,10,20,50,100,200,500,2000};
     
	 int t=sizeof(coins)/sizeof(int);
	   sort(coins,coins+t,greater<int>());
	  cout<<makeChange(coins,39,0); 
}
