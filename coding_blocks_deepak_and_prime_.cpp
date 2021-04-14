#include<iostream>
using namespace std;
void is_prime(int arr[])
{     arr[1]=0;
       arr[0]=0;
       arr[2]=1;
	  for(int i=3;i<100005;i+=2)
          arr[i]=1;
	  for(int i=2;i<100005;i++)
	  {   if(arr[i]==1)
	       { for(int j=i*i;j<100005;j=j+i)
		         {arr[j]=0;

				 }

		   }

	  }

}
int main() 
{
	int n;
	cin>>n;
	int arr[100005]{0};
	is_prime(arr);
	for(int i=0;i<100005;i++)
	    {if(arr[i]==1)
		    { cout<<i<<" ";
			    n--;
			    cout<<n<<" ";
			    if(n==0)
			   {cout<<i;
			     break;

			   }
			
			}
			
		}
	return 0;
}
