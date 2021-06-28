Link for Ques:
https://www.codechef.com/LTIME97B/problems/UNONE


#include<bits/stdc++.h>
#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define lli long long int
using namespace std;
const int M=1e9+7;
lli power(lli a,lli b)
{
     if(b==0 )
        return 1;
       if(b==1)
       return a;
     
      if(!(b&1)) 
      return (power(a,b/2)%M)*(power(a,b/2)%M);
      else
      return ((a)*(power(a,b/2)%M)%M)*(power(a,b/2)%M);

}

lli  gcd(lli u, lli v)
{
   lli shift;
   if (u == 0) return v;
   if (v == 0) return u;
   shift = __builtin_ctz(u | v);
   u >>= __builtin_ctz(u);
   do {
       v >>= __builtin_ctz(v);
       if (u > v) {
         lli t = v;
           v = u;
           u = t;
       }  
       v = v - u;
   } while (v != 0);
   return u << shift;
}



int main()
{    fastio;
int t;
cin>>t;
while(t--)
{
      int n,flag=0;
      cin>>n;
      int x;
      vector<int>odd,even;
      for(int i=0;i<n;i++)
      {
            cin>>x;
            if(x&1)
            {
                odd.push_back(x);
            }
            else
            even.push_back(x);
      }
      vector<int>ans;
      sort(odd.begin(),odd.end(),greater<int>());
      sort(even.begin(),even.end(),greater<int>());
      int ele=0;
      if(even.size()>0 and odd.size()>0)
      {    sort(odd.begin(),odd.end());
         sort(even.begin(),even.end());
          
          ele=odd[0];
          odd.erase(odd.begin());
          for(int i=1;i<n;i++)
          {
                if((i&1 or even.size()==0) and odd.size()>0)
                {
                     ans.push_back(odd[odd.size()-1]);
                     odd.pop_back();
                }
                else if((i%2==0 or odd.size()==0) and even.size()>0)
                {
                     ans.push_back(even[even.size()-1]);
                       even.pop_back();
                }
                   
          }
          ans.push_back(ele);
           for(auto it:ans)
          {
              cout<<it<<" ";
          }
          cout<<endl;
          
      }
      else if(even.size()>0 and odd.size()==0)
      {
          for(auto it:even)
          {
              cout<<it<<" ";
          }
          cout<<endl;
      }
      else
      { for(auto it:odd)
          {
              cout<<it<<" ";
          }
          cout<<endl;
          
      }
     
}

      
}


     
