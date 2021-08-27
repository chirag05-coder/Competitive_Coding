Link for Ques:
https://codeforces.com/contest/1562/problem/B


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


  bool isprime[100];
  void gen()
  {
       for (int i = 2; i < 100; i++) {
        isprime[i] = true;
        for (int j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                isprime[i] = false;
            }
        }
    }
  }
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	memset(isprime,0,sizeof(isprime));
	gen();
	 
	 int t;
	 cin>>t;
	 while(t--){
	     int n;
	     cin>>n;
	     string str;
	     cin>>str;
	     int flag=0;
	     for(auto it:str)
	     {
	         if(it=='1' or it=='4' or it=='6' or it=='8' or it=='9')
	         {
	             flag++;
	             cout<<1<<"\n"<<it<<"\n";
	             break;
	         }
	     }
	     if(flag==0)
	     {
	         int ans=0,flag1=0;
	         for(int i=0;i<str.length();i++)
	         {
	             int left=str.at(i)-'0';
	              for(int j=i+1;j<str.size();j++)
	              {
	                  int right=str.at(j)-'0';
	                  int num=((left*10) + right);
	                  if(!isprime[num])
	                  {
	                      flag1++;
	                      ans=num;
	                      break;
	                  }
	              }
	              if(flag1)
	              break;
	         }
	         cout<<2<<"\n"<<ans<<"\n";
	     }
	 }


    

    return 0;
   
}

     
