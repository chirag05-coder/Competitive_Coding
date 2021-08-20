Link for Ques:
https://www.hackerearth.com/practice/data-structures/trees/heapspriority-queues/practice-problems/algorithm/monk-and-the-magical-candy-bags/




// Sample code to perform I/O:

#include <bits/stdc++.h>
#define lli long long int
using namespace std;

int main() {
	
	 int t;
	 cin>>t;
	 while(t--)
	 {
		  int n,k;
		  cin>>n>>k;
		  priority_queue<lli>pq;
		  lli x;
		  while(n--)
		  {    cin>>x;
			  pq.push(x);
		  }
		  lli sum=0;
		  while(k--)
		  {
             sum+=pq.top();
			  pq.push(pq.top()/2);
			  pq.pop();
		  }
		  cout<<sum<<endl;

	 }
}

// Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail


// Write your code here
