Link for Ques:
https://www.hackerearth.com/practice/data-structures/hash-tables/basics-of-hash-tables/practice-problems/algorithm/t-rex-and-the-pairs-0a045ce2/



// Sample code to perform I/O:

#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
     long long int num;
	cin >> num;
	long long int arr[num]{0};
	for(int i=0;i<num;i++)
	    cin>>arr[i];

		long long int ans=0;
		for(int i=0;i<num;i++)
		{
			for(int j=i+1;j<num;j++)
			   {   long long int a,b;
			       a=(i+1)*1LL*(i+1);
				   b=(j+1)*1LL*(j+1);
                   if(abs(arr[j]-arr[i])==(a+b))
				    ans++;
			   }
		}	
		cout<<ans<<endl;									
}

// Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail


// Write your code here
