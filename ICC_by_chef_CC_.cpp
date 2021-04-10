Link FOr Ques:
https://www.codechef.com/RTR2021/problems/ICC


#include<bits/stdc++.h>
#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define lli long long int

using namespace std;
int main()
{    fastio;
   int t;
   cin>>t;
   while(t--)
   {
       string str;
       cin>>str;
       int maxii=0,cnt=0;
       char ch;
       for(int i=0;i<str.length()-1;i++)
       {
              if(str.at(i)==str.at(i+1))
              {
                  cnt++;
              }
              else
              {
                  if(cnt+1>maxii)
                  {   ch=str.at(i);
                      maxii=max(cnt+1,maxii);
                  }
                  cnt=0;
              }
       }
       if(cnt+1>maxii)
       {
           ch=str.at(str.length()-1);
           maxii=cnt+1;
       }
     
       cout<<maxii<<" "<<ch<<endl;
   }
     
}
