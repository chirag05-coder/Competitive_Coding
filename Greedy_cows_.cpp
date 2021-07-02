#include<bits/stdc++.h>
using namespace std;
int main()
{   int d_town,p;
     cin>>d_town>>p;
    int stops;
    cin>>stops;
    int d[stops]{0},fuel[stops]{0};
    for(int i=0;i<stops;i++)
    {    cin>>d[i];
         cin>>fuel[i];
    }
    for(int i=0;i<stops;i++)
    {    d[i]=d_town-d[i];
	}
	reverse(fuel,fuel+stops);
	reverse(d,d+stops);
	
	int diff=0,min_stop=0,i=0;
	for(int i=0;i<stops;i++)
	{     diff=d[i]-d[i-1]; 
	      p=p-diff;   
	
	   if(p>=d_town or d_town<=0 )
	       {   break;
	       }
	      else if(p+d[i]==0)
		  {   min_stop++;
		    
		       p=p+fuel[i];
		       d_town=d_town-d[i];
		     //  continue;
	      }
		  else if(d[i]-p<d[i] && p+fuel[i]>=d_town)
		  {    min_stop++;
		         break;
		   } 
		

	}
	
//	for(int i=0;i<stops;i++)
//	{    cout<<i+1<<" stop at "<<d[i]<<" having "<<fuel[i]<<" fuel"<<endl;
//		
//	 } 

cout<<min_stop;
}
