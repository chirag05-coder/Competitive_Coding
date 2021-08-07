#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;
int main()
{   int n;  //No of dots taken as 3
    cin>>n;
    int white[]={3,4,1};
    int black[]={2,5,6};
    sort(white,white+n);
    sort(black,black+n);
    int wire=0;
    for(int i=0;i<n;i++)
    {
    	  wire += abs(white[i]-black[i]);
	}
	cout<<wire;
    
}
