Link for Ques:
https://codeforces.com/contest/1593/problem/D1


#include<bits/stdc++.h>
#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define lli long long int
using namespace std;
const long long int mod=1e9+7;

 set<lli> smallest_odd_factor(lli num)
  {
    
      set<lli>st;
      for (lli i=1; i*i<=num; i++)
    {
        if (num%i == 0)
        {
            if (num/i == i)
              st.insert(i);
 
            else 
            {
                st.insert(i);
                st.insert(num/i);
            }
        }
    }
      return st;
  }
int main()
{    fastio;

        
           int t;
           cin>>t;
           while(t--)
           {
                   int n;
                   cin>>n;
                   set<lli>st;
                   int arr[n]{0};
                   for(int i=0;i<n;i++)
                   {
                       cin>>arr[i];
                       st.insert(arr[i]);
                   }
                   if(st.size()==1)
                   {
                       cout<<"-1"<<endl;
                   }
                   else
                   {
                   auto it=st.begin();
                   lli first=(*it);
                   it++;
                   lli second=(*it);
                   lli x=second-first;
                   set<lli>res=smallest_odd_factor(x);
            
                  bool flag=true;
                  st.erase(*st.begin());
                  for(auto it=res.rbegin();it!=res.rend();it++)
                     {
                     
                             lli ele=(*it);
                             flag=true;
                             for(auto ip:st)
                             {
                                  
                                      
                                          if((ip-first)%ele==0)
                                            {
                                                flag=true;

                                            }
                                            else
                                            { flag=false;
                                                break;
                                            }
                                      
                                      
                             }
                             if(flag==true and ele<100000000)
                             {  
                                 cout<<ele<<endl;
                                 break;
                             }
                             
                     }
                     if(flag==false)
                       cout<<"-1"<<endl;
                     
                     
                   }
                   
                  
           }
       
}



     
