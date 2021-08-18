Link for Ques:
https://www.hackerearth.com/practice/data-structures/trees/heapspriority-queues/practice-problems/algorithm/monk-and-champions-league/



// Sample code to perform I/O:

#include <bits/stdc++.h>

using namespace std;

int main() {
	int m,n;
	cin>>m>>n;

	priority_queue<int>pq;
	int x;
	while(m--)
	{  cin>>x;
	   pq.push(x);

	}
	int sum=0;
	while(n--)
	{
		sum+=pq.top();
		int x=pq.top()-1;
		pq.pop();
		pq.push(x);
	}
	cout<<sum<<endl;
	
											// Reading input from 
}

// Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail


// Write your code here
