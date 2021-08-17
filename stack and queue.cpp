Link for Ques:
https://www.hackerearth.com/practice/data-structures/stacks/basics-of-stacks/practice-problems/algorithm/staque-1-e790a29f/


#include<bits/stdc++.h>
#define ll long long int
#define test while(t--)
#define pb push_back
#define ain(arr) for (auto &it : arr) cin >> it;
using namespace std;
const int inf = 1e9+7;


int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	ll n,k;
	cin>>n>>k;
	ll arr[n]{0};
	ll pre[n+1] {0};
	priority_queue<ll>pq;
	cin>>arr[0];
	pre[0]=arr[0];
	for(int i=1;i<n;i++)
	{
       cin>>arr[i];
	   pre[i]=pre[i-1]+arr[i];
	}
	int i=1;
	while(k>0)
	{
		pq.push(pre[k-1]+pre[n-1]-pre[n-i]);
		k--;
		i++;
	}
	cout<<pq.top()<<"\n";
	return 0;

}
