#include<iostream>
using namespace std;
int main()
{  int num,count =0;
   cout<<"Enter the number: ";
   cin>>num;
   int r,rev=0;
   while(num>0)
   { r=num%10;
     rev=rev*10+r;
     num=num/10;
   }
   for(int i=2;i<=num+rev;i++)
   {    if(num%i==0 &&rev%i==0)
           count++;
   }
   if(count==1)
     cout<<" Is a emirp number: ";
     else
     cout<<"Not";
   
}
