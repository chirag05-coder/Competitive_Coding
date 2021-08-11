Link for Ques:
https://www.hackerearth.com/practice/data-structures/arrays/1-d/practice-problems/algorithm/2-arrays-90c9019c/


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
	ll n;
	cin>>n;
	int arr[n]{0};
	int brr[n]{0};
	int a_1=0,b_1=0;
	ll sum_a=0, sum_b=0;
	for(int i=0;i<n;i++)
	{
      cin>>arr[i];
	  if(arr[i]==-1)
	  a_1++;
	  else
	  sum_a+=arr[i];
	}
	for(int i=0;i<n;i++)
	{
      cin>>brr[i];
	  if(brr[i]==-1)
	  b_1++;
	   else
	  sum_b+=brr[i];
	}
	if(a_1==1 and b_1==1)
	cout<<"Infinite\n";
	else if(a_1==1 and b_1==0)
	{
		if(sum_a<=sum_b)
		cout<<1<<"\n";
		else
		cout<<0<<"\n";
	}
	else if (b_1==1 and a_1==0)
	{
		if(sum_b<=sum_a)
		cout<<1<<"\n";
		else
		cout<<0<<"\n";
	}
	else
	{
		if(a_1==2)
		{
			if(sum_a<sum_b)
          cout<<abs(sum_a-sum_b)+1<<"\n";
	      else
	     cout<<0<<"\n";
		}
		else
		{
		if(sum_b<sum_a)
          cout<<abs(sum_a-sum_b)+1<<"\n";
	      else
	     cout<<0<<"\n";
		}


	}

	return 0;

}
