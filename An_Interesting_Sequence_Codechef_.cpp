Link for Ques:
https://www.codechef.com/MAY21C/problems/ISS

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
     
    array<int,4000009> a1;
    array<int,4000009>a2;

     for(int i=0;i<4000009;i++)
   {
       a1.at(i)=i;
       a2.at(i)=0;
   }
   for(int j=2;j<4000009;j++)
   {
       if(a1.at(j)==j)
       {
           a1.at(j)=j-1;
           for(int k=2*j;k<4000009;k+=j)
           {
               a1.at(k)=(a1[k]/j)*(j-1);
           }
       }
   }
   for(int j=1;j<4000009;j++)
   {
       a2[j]+=j-1;
       for(int k=2*j;k<4000009;k+=j)
       {
           a2[k]+= j *((1+a1[k/j])/2);
       }
   }
   

     while(t--)
     {
     lli num;
     cin>>num;
     
     cout<<a2.at(4*num+1)<<endl;
    
         
         
         
     }
     
     
}
