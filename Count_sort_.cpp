#include<iostream>
#include<algorithm>
#include<ctime>
using namespace std;
int main() {
	clock_t start=clock();
	int T,j;
	long long int N,temp;
    cin>>T;
     cin>>N;
	 long long int arr[N]{0};
	 int a,b;
	 cin>>a>>b;
	while(T>0)
	{   for(int i=0;i<N;i++)
	      {      cin>>temp;
	            if(temp>a && temp<b)
	                 arr[i]=temp;
		         else
		         i--;
		  }
		long int count[b]{0};
		for(int i=0;i<N;i++)
		  {   count[arr[i]]++;}
         for(int i=0;i<N;i++)
		 {   while(count[i]>0)
	             {     arr[j]=i;
	                    count[i]--;
				          j++;
				 }
           }
		   for(int i=0;i<N;i++)
		       cout<<arr[i]<<" ";

		 T--;
	}  
	clock_t end=clock();
	return 0;
	cout<<end-start;
}
