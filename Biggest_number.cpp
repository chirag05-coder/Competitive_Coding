#include<iostream>
#include<string>
#include<algorithm>

using namespace std;
int main()
{    int t;
    cin>>t;
    while(t>0)
    {
	
	int size;
	//cout<<"enter the size"<<endl;
	cin>>size;
	int arr[size]{0};
	string brr[size];
//	cout<<"enter elements of array"<<endl;
	for(int i=0;i<size;i++)
	{   cin>>arr[i];
	    brr[i]=to_string(arr[i]);
   
   }

 
  sort(brr,brr+size,greater<string>());
  for(int i=0;i<size;i++)
    {   arr[i]=stoi(brr[i]);
	     cout<<arr[i];
	 }
	 
      cout<<endl;
   t--;
}
}
