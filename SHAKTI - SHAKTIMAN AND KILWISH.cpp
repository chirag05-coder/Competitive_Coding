Link for Ques:
https://www.spoj.com/problems/SHAKTI/


#include <iostream>
using namespace std;

int main() {
	// your code goes here
	long long t;
	cin>>t;
	while(t--)
	{
		long long num;
		cin>>num;
		if(num&1)
		{
			cout<<"Sorry Shaktiman\n";
		}
		else
		cout<<"Thankyou Shaktiman\n";
	}
	return 0;
}
