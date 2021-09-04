Link for Ques:
https://www.spoj.com/problems/PRIME1/



#include <iostream>
using namespace std;
#define ll long long int 

bool is_prime(ll num)
{      if(num==1)
      return false;
      if(num==2 || num==3)
	      return true;
		if(num%2==0 || num%3==0)
		     return false;
	 for(int i=5;i*i<=num;i=i+6)
	   {      if(num%i==0 || num%(i+2)==0)
	              return false;
		   }
		return true;       
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
     
	 ll t;
	 cin>>t;
	 while(t--){
		 ll left,right;
		 cin>>left>>right;
		 for(int i=left;i<=right;i++)
		 {
			 if(is_prime(i))
			 cout<<i<<"\n";
		 }
		 
	 }



	return 0;
}



