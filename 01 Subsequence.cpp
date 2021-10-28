Link for Ques:
https://www.codechef.com/COOK134B/problems/ZEROONE


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
lli highestPowerof2(lli n)
{
  lli p = (int)log2(n);
  // return (int)pow(2, p);   power
  
     return p;  //number
}
bool is_prime(int num)
{      if(num==1)
      return false;
      if(num==2 || num==3)
	      return true;
		if(num%2==0 || num%3==0)
		     return false;
	 for(int i=5;i*i<=num;i=i+6)
	   {      if(num%i==0 || num%(i+2)==0)
	              return false;
		   }
		return true;       
}



int main()
{    fastio;
      int t;
     cin>>t;
    while(t--){
         
          int n;
          cin>>n;
           int arr[n]{0};
           priority_queue<int>pq;
           priority_queue<int,vector<int>,greater<int>>one;
           int sum=0,ans=0;
           for(int i=0;i<n;i++)
           {
               cin>>arr[i];
               if(i%2==0)
               {
                  pq.push(arr[i]);
               }
               else
               {one.push(arr[i]);
               
                   sum+=arr[i];
               }
           }
           vector<int>v(n,0);
             int k=0;
              while(k!=n)
              {
                   if(!pq.empty())
                    {
                        v[k++]=pq.top();
                        pq.pop();
                    }
                    if(!one.empty())
                    {
                        v[k++]=one.top();
                        one.pop();
                    }
              }
              for(int i=0;i<n;i+=2)
              {   
                  int val=v[i]*1LL*sum;
                  ans+=val;
                  
                  sum-=v[i+1];
              }
              for(auto it:v)
              {
                  cout<<it<<" ";
              }
              cout<<endl;
              cout<<ans<<endl;
           
           
     }
}



     
