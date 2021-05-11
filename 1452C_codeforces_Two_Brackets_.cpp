Link for Ques:
https://codeforces.com/problemset/problem/1452/C

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

int main()
{    fastio;
lli t;
cin>>t;
while(t--)
{        
    string str;
    cin>>str;
    int open_round=0,close_round=0,open_square=0,close_square=0,ans=0;
    for(int i=0;i<str.length();i++)
    {    char ch=str.at(i);
          if(ch=='(')
           {
               open_round++;
           }
           else if(ch==')')
             {
                 close_round++;
             }
             else if(ch=='[')
                {
                     open_square++;
                }
                else if(ch==']')
                {
                    close_square++;
                }
          if(close_square>open_square)
             {
                 close_square=0;
             }
            if(close_round>open_round)
            {
                close_round=0;
            }
            if(open_square>=1 and close_square==1)
            {
                  ans++;
                  open_square--;
                  close_square--;
            }
            if(open_round>=1 and close_round==1)
            {
                   ans++;
                   open_round--;
                   close_round--;
            }
             
        
    }
    cout<<ans<<endl;
       
}
}
