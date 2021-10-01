Link for Ques:
https://codeforces.com/contest/408/problem/B




#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    string a,b;
    cin>>a>>b;
    unordered_map<char,int>umap,umap1;

    for(auto it:a)
    {
          umap[it]++;
    }
     for(auto it:b)
    {
          umap1[it]++;
    }

    // for(auto it:umap)
 
  

     int len=0;
     string str;
     for(auto it:umap1)
     {
            
            if(umap.find(it.first)!=umap.end())
             {  // cout<<it.first<<endl;
                 str.push_back(it.first);
                 len+=min(umap[it.first],it.second);
             }
     }
    // cout<<str<<endl;
     if(len==0)
     len-=1;

     if(umap1.size()==str.size())
     cout<<len<<endl;
     else
     cout<<"-1"<<endl;
     
	return 0;
}

