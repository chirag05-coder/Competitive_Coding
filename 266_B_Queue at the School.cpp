Link for Ques:
https://codeforces.com/contest/266/problem/B


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

       int n,t;
       cin>>n>>t;
       string str;
       cin>>str;
        while(t--)
        {
       for(int i=0;i<n-1;i++)
       {
             char ch=str.at(i);
             char ch1=str.at(i+1);
             if(ch=='B' and ch1=='G')
              {
                    swap(str.at(i),str.at(i+1));
                    i++;
              }
       }
        }
        cout<<str<<endl;
     

     
}
