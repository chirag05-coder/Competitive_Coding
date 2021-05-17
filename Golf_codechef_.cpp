Link for Ques:
https://www.codechef.com/MAY21C/problems/LKDNGOLF

#include<bits/stdc++.h>
#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define lli long long int

using namespace std;

bool solve(lli Num,lli hole,lli hit)
{    if(hole%hit==0 or (Num+1-hole)%hit==0)
        {
              return true;
        }
      else
      {
          return false;
      }
    
}
int main()
{    fastio;
   lli t;
   cin>>t;
   while(t--)
   {
       lli Num,hole,hit;
        cin>>Num>>hole>>hit;
        
        if(solve(Num,hole,hit))
        {
               cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
       
   }
     
}
