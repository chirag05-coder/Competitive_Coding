// Link for Ques:
https://codeforces.com/problemset/problem/1474/A


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
      lli n;
      cin>>n;
      string str;
      cin>>str;
      string s;
      s.push_back('1');
      for(int i=1;i<str.length();i++)
      {      if(str.at(i-1)=='0' and str.at(i)=='0')
               {
                     if(s.back()=='0')
                      {
                          s.push_back('1');
                      }
                      else
                      {
                          s.push_back('0');
                      }
               }
               else if(str.at(i)=='1' and s.back()=='1' and str.at(i-1)=='0')
                     s.push_back('1');
              else if(str.at(i)!=s.back())
                {
                    s.push_back('1');
                }
                else
                {
                    s.push_back('0');
                }
          
      }
      cout<<s<<endl;
       
}
}
