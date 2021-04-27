Link for Ques:
https://codeforces.com/problemset/problem/1353/B



#include<bits/stdc++.h>
#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define lli long long int

using namespace std;
void print(string str)
{  
    if(str.length()==0)
    {
        return;
    }
    print(str.substr(1));
    cout<<str.at(0);
    
    
}
int main()
{    fastio;
    int  t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int arr[n]{0},brr[n]{0};
        for(auto &it:arr)
          cin>>it;
          for(auto &it:brr)
          cin>>it;
          sort(arr,arr+n);
          sort(brr,brr+n,greater<int>());
          int i=0,b=0;
          while(k--)
          {
              if(arr[i]<brr[i])
              {
                   swap(arr[i],brr[i]);
              }
              
              else
              break;
              i++;
          }
          for(auto it:arr)
           {
               b+=it;
           }
           cout<<b<<endl;
        
          
        
    }
    
   
    
}
