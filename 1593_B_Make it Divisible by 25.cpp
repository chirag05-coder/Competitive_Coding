Link for Ques:
https://codeforces.com/contest/1593/problem/B


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
                string str;
                cin>>str;
                
                int flag=0;
                int pos=0,pos2=-1;
                int len=str.length();
                 int lenn=str.length()-1;
                for(int i=lenn;i>=0;i--)
                {    char ch=str.at(i);
                     if(ch=='5' and flag==0)
                      {
                          pos=i;
                          flag++;
                      }
                      if(ch=='2' and flag==1)
                         {
                             pos2=i;
                             break;
                         }
                        
                }
                int ans1=INT_MAX;
                if(pos2!=(-1))
                 {
                       ans1=len-(pos2+1)-1;
                 }
                 pos=0,pos2=-1;
                 flag=0;
                 
                  for(int i=lenn;i>=0;i--)
                {    char ch=str.at(i);
                     if(ch=='5' and flag==0)
                      {
                          pos=i;
                          flag++;
                      }
                      if(ch=='7' and flag==1)
                         {
                             pos2=i;
                             break;
                         }
                        
                }
                int ans2=INT_MAX;
                if(pos2!=(-1))
                 {
                       ans2=len-(pos2+1)-1;
                 }
                  pos=0,pos2=-1;
                  flag=0;
                 
                  for(int i=lenn;i>=0;i--)
                {    char ch=str.at(i);
                     if(ch=='0' and flag==0)
                      {
                          pos=i;
                          flag++;
                      }
                      if(ch=='5' and flag==1)
                         {
                             pos2=i;
                             //cout<<pos2<<endl;
                             break;
                         }
                        
                }
                 int ans3=INT_MAX;
                if(pos2!=(-1))
                 {
                       ans3=len-(pos2+1)-1;
                 }
                 
                  pos=0,pos2=-1;
                  flag=0;
                 
                  for(int i=lenn;i>=0;i--)
                {    char ch=str.at(i);
                     if(ch=='0' and flag==0)
                      {
                          pos=i;
                          flag++;
                          break;
                      }
                     
                      if(ch=='0' and flag==1)
                         {
                             pos2=i;
                             break;
                         }
                        
                }
                 for(int i=pos-1;i>=0;i--)
                {    char ch=str.at(i);
                     
                      if(ch=='0')
                         {
                             pos2=i;
                             break;
                         }
                        
                }
                 int ans4=INT_MAX;
                if(pos2!=(-1))
                 {
                       ans4=len-(pos2+1)-1;
                 }
              //   cout<<ans1<<" "<<ans2<<" "<<ans3<<" "<<ans4<<endl;
              cout<<min(ans1,min(ans2,min(ans3,ans4)))<<endl;
                
                
                  
           }
       
}



     
