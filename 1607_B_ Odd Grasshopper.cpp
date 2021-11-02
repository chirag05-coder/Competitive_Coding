Link for Ques:
https://codeforces.com/contest/1607/problem/B


#include<bits/stdc++.h>
#define endl "\n"
#define int long long int
using namespace std;



signed main()
{    
      int t;
     cin>>t;
    while(t--){
         
          int pre,jump;
      cin>>pre>>jump;
      
      
      int rem=jump%4;
      if(rem==0)
      cout<<pre<<endl;
      else if(!(pre&1))
      {
         
           if(rem==1)
          {
               int val=ceil(jump/(4*1.0));
              int temp=pre-1;
             
              int res= temp + ((val-1)*1LL*(-4));
              cout<<res<<endl;
          }
          else if(rem==2)
          cout<<pre+1<<endl;
          else
          {     int val=ceil(jump/(4*1.0));
              int temp=pre+4;
            
              int res= temp + ((val-1)*1LL*(4));
              cout<<res<<endl;
          }
      }
      else
      {
          
           if(rem==1)
          {   int val=ceil(jump/(4*1.0));
              int temp=pre+1;
              
              int res= temp + ((val-1)*1LL*(4));
              cout<<res<<endl;
          }
          else if(rem==2)
          cout<<pre-1<<endl;
          else
          {    int val=ceil(jump/(4*1.0));
              int temp=pre-4;
             
              int res= temp + ((val-1)*1LL*(-4));
              cout<<res<<endl;
          }
      }
}
}



     
