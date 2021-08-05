#include<iostream>
using namespace std;

void TOH(int n, char A,char B,char C)
{
	if(n>0)
	{   TOH(n-1,A,C,B);
	       cout<<"Move from "<<A<<" to "<<C<<" using "<<B<<endl;		
	     TOH(n-1,B,A,C);
	
	}
	  
}
int main()
{   TOH(4,'A','B','C');
	
}
