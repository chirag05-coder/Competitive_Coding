#include<iostream>
#include<algorithm>
using namespace std;
//  int gcd(int a,int b)
//  {    while(a!=b)
//       {    if(a>b)
//              a=a-b;
//              else
//              b=b-a;
//	   }
//	return a ;
//  }
  
  int GCD(int A, int B) {
    if(B==0)
        return A;
    else
        return GCD(B, A % B);
}

int main()
{   int a,b;
     cin>>a>>b;
     cout<<gcd(a,b);
	
}
