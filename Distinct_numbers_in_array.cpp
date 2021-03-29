Link for Questions:

https://cses.fi/problemset/task/1621/


#include<bits/stdc++.h>
using namespace std;
int main()
{   long long int n;
 cin>>n;
  map<long long int ,long long int>umap;
    long long int x;
    for(long long int i=0;i<n;i++)
     {  cin>>x;
         umap[x]++;
	 }
	 cout<<umap.size();
    
}
