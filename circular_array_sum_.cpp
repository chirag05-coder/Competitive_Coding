#include<iostream>
using namespace std;
int main()
{   int t;
   cin>>t;
   while(t>0)
{

    int size;
     cin>>size;
 
     int arr[size]{0};
     for(int i=0;i<size;i++)
        cin>>arr[i];
     int cur_sum=0,max_sum=0,invert_sum=0;


	 	 for(int i=0;i<size;i++)
	 {     
		   cur_sum=cur_sum+arr[i]; 
          if(cur_sum<0)
             {   cur_sum=0;
             
				 }
            
               max_sum=max(cur_sum,max_sum);
             
           
    }
    int sum=0;
    cur_sum=0;
    for(int i=0;i<size;i++)
       {   sum=sum+arr[i];
            arr[i]=-arr[i];
	   }
	   for(int i=0;i<size;i++)
	   {cur_sum=cur_sum+arr[i]; 
          if(cur_sum<0)
             {   cur_sum=0;
               
				 }
            
               invert_sum=max(cur_sum,invert_sum);
	   }
    
   
   
   
 
invert_sum=sum-(-invert_sum);
max_sum=max(max_sum,invert_sum);
cout<<max_sum<<endl;
t--;
}
   
}
