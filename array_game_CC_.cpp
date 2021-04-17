Link for Ques:
https://www.codechef.com/SCC82021/problems/SSEC0131


#include<bits/stdc++.h>
#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define lli long long int

using namespace std;
int main()
{    fastio;
int n,m;
cin>>n>>m;
int arr[n]{0};
for(int i=0;i<n;i++)
{
    cin>>arr[i];
}
unordered_map<int,int>umap;
deque<int>dq;
int j=0,i=0;
int maxii=INT_MIN;
while(j<n)
{   umap[arr[j]]++;
      dq.push_back(arr[j]);
    
    if(j-i+1==m)
    {    int x=umap.size();
          maxii=max(x,maxii);
          int temp=dq.front();
          dq.pop_front();
          umap[temp]--;
          if(umap[temp]==0)
            umap.erase(temp);
         
    
        
        i++;
        j++;
    }
    if(j-i+1<m)
    {
        j++;
    }
}
cout<<maxii<<endl;
     
}
