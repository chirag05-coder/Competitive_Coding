Link for Ques:
https://www.hackerearth.com/practice/data-structures/arrays/1-d/practice-problems/algorithm/maximize-sum-0423b95e/




// Sample code to perform I/O:

#include <bits/stdc++.h>
#define inti long long int

using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	 inti t;
	 cin>>t;
	 while(t--)
	 {
		 inti n,k;
		 cin>>n>>k;
		  vector<inti> arr;
		  unordered_map<inti,inti>umap;
		  inti x;
		  for(inti i=0;i<n;i++)
		  {
			    cin>>x;
				arr.push_back(x);
				umap[x]++;
		  }
		
		priority_queue<inti>pq;
		for(auto it:umap)
		{
			 if(it.first>0)
			 {
				 pq.push(it.first*it.second);
			 }
		}
		inti sum=0;
		while(!pq.empty() and k>0)
		{
			sum+=pq.top();
			pq.pop();
			k--;
		}
		cout<<sum<<endl;
		 

	 }									// Reading input from 
}

// Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail


// Write your code here
