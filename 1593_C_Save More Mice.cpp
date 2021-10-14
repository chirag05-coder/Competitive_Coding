Link for Ques:
https://codeforces.com/contest/1593/problem/C


#include<bits/stdc++.h>
#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define lli long long int
using namespace std;
const long long int mod=1e9+7;


int main()
{    fastio;

        
           int t;
           cin>>t;
           while(t--)
           {
                 int n,k;
                 cin>>n>>k;
                 int arr[k]{0};
                 int x;
                 vector<int>v;
                for(int i=0;i<k;i++)
                {
                
                       cin>>x;
                       v.push_back(x);
                       arr[i]=n-x;
                       
                }
             
                  sort(v.begin(),v.end(),greater<int>());
                 int cat=0,ans=0,i=0;
               for(int i=0;i<k;i++)
               {
                       if(cat>=v[i])
                          break;
                          
                        ans++;
                        cat+=(n-v[i]);
                   
               }
               
                cout<<ans<<endl;
                  
           }
       
}



     
