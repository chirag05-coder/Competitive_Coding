Link for Ques:
https://codeforces.com/problemset/problem/1513/A


#include<bits/stdc++.h>
#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define lli long long int

using namespace std;

int main()
{    fastio;
    int t;
   cin>>t;
   while(t--){
       double n,k;
       
       cin>>n>>k;
       if(k>=ceil(n/2))
       {
           cout<<"-1";
       }
       else
       {  int i;
           vector<int>v;
           for( i=1;i<=n-k;i++)
           {   v.push_back(i);
               
           }
           if(v.size()>1)
           {   int a=1,j=v.size()-1;
               while(k--)
               {
                //   swap(v[i],v[j]);
                //   i+=2;
                  v.insert(v.begin()+a,i);
                  i++;
                  a+=2;
                   
               }
           }
           for(auto it:v)
           {
               cout<<it<<" ";
           }
       }
       cout<<endl;
          
   }
    
   
    
}
