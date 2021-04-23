#include<iostream>
#include<algorithm>
#include<cstdlib>
using namespace std;
int main()
{    int r;
      int next=0,count1=0,count2=0;
    cin>>r;
    while(r>0)
    {    int p1,p2;
          cin>>p1>>p2;
          int curr=0;
          curr=max(p1,p2);
           curr=curr-min(p1,p2);
           next=max(next,curr);
           if(abs(p1-p2)==next)
               {      if(p1>p2)
                         count1++;
                         else
                         count2++;
			   }
           r--;
            
	}
	   if(count1>count2)
	   cout<<"1"<<" ";
	   else
	   cout<<"2"<<" ";
	cout<<next;

}
