Link for Ques:
https://codeforces.com/contest/1559/problem/B


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

string convert(string str,char temp)
{
     char ch;
     int n=str.size();
       for(int i=0;i<n;i++)
       {    
           if(str.at(i)=='?' and i-1>=0 )
            {    ch=str.at(i-1);
                 if(ch!='?')
                 {
                if(ch=='R')
                   str.at(i)='B';
                 else if(ch=='B')
                  str.at(i)='R';
                 }
            }         
                 else if(str.at(i)=='?' and i+1<n and str.at(i+1)!='?')
                    { ch=str.at(i+1);
                        if(ch=='R')
                     str.at(i)='B';
                   else if(ch=='B')
                    str.at(i)='R';
                        
                    }else if(str.at(i)=='?') {
                        str.at(i)=temp;
                    }
                  
                 
            
       }
       return str;
}

int main()
{    fastio;

    int t;
    cin>>t;
    while(t--)
    {
       int n;
       cin>>n;
       string str;
       cin>>str;
       string ans,ans1;
        
        ans=convert(str,'B');
        ans1=convert(str,'R');
        int cnt=0,cnt1=0;
        for(int i=0;i<n-1;i++)
        {
               if(ans.at(i)==ans.at(i+1))
                  {cnt++;}
                   if(ans1.at(i)==ans1.at(i+1))
                  {cnt1++;}
        }
        cnt1<cnt?cout<<ans1<<endl : cout<<ans<<endl;
       
    }

      
}


     
