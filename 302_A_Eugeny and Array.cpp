Link for Ques:
https://codeforces.com/contest/302/problem/A



#include<bits/stdc++.h>
#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
//#define lli long long int
using namespace std;
const long long int mod=1e9+7;


signed main()
{    fastio;

        
         
    
                int n,m;
                cin>>n>>m;
                int arr[n]{0};
                vector<int>ans;
                vector<pair<int,int>>v;
                int one=0,neg=0;
                for(int i=0;i<n;i++)
                {
                
                    cin>>arr[i];
                    if(arr[i]==1)
                        one++;
                        else
                        neg++;
                        
                    v.push_back({one,neg});
                }
                // for(auto it:v)
                // {
                
                //       cout<<it.first<<" "<<it.second<<endl;
                // }
                
                while(m--)
                {
                      int l,r;
                      cin>>l>>r;
                      if(l==r)
                      {
                          ans.push_back(0);
                      }
                      else
                      {
                          int cnt1,cnt2;
                            if(l==1)
                            {
                                cnt1=v[r-1].first;
                          cnt2=v[r-1].second;
                            }
                            else
                            {
                          cnt1=v[r-1].first-v[l-2].first;
                          cnt2=v[r-1].second-v[l-2].second;
                            }
                          if((abs(cnt1-cnt2))&1)
                            {
                                  ans.push_back(0);
                            }
                            else
                            {
                                   if(cnt1>cnt2)
                                    {
                                         if((neg-cnt2)>=(abs(cnt1-cnt2))/2)
                                             {
                                                   ans.push_back(1);
                                             }
                                             else
                                             ans.push_back(0);
                                    }
                                    else
                                    {
                                         if((one-cnt1)>=(abs(cnt1-cnt2))/2)
                                             {
                                                   ans.push_back(1);
                                             }
                                             else
                                             ans.push_back(0);
                                    }
                                    
                            }
                      }
                }
                
                for(auto it:ans)
                {
                      cout<<it<<endl;
                }
              
                
                 
       
}



     
