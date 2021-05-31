Link for Ques:
https://www.codechef.com/LTIME96B/problems/NUMCOMP1


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



int main()
{    fastio;

     bool is_prime[10000000+1];
    memset(is_prime,true,sizeof(is_prime));
    for(int i=2;i*i<=10000000+1;i++)
    {
    	    if(is_prime[i])
    	    {  for(int k=i*i;k<=10000000+1;k=k+i)
    	          {   is_prime[k]=false;
				  }
			}
    	
	}
	map<int,int>umap;
	int freq=0;
	for(int i=2;i<=10000000+1;i++)
	{
	      if(is_prime[i])
	      {
	           umap[i]=freq;
	            freq++;
	      }
	     
	         
	      
	}
	
	int t;
	cin>>t;
	while(t--)
	{    int num;
	      cin>>num;
	      int res=0;
	  if(num==2)
	  {
	       cout<<"1"<<endl;
	  }
	  else if(num==3)
	  {
	       cout<<"2"<<endl;
	  }
	  else
	  {  int i=0;  
	for( i=num/2+1;i<=num;i++)
	  {    if(is_prime[i])
	         {  
	             break; 
	         
	             
	         }
	  }
	  int last=num;
	  for(;last>=0;last--)
	  {
	        if(is_prime[last])
	        {
	            break;
	        }
	  }
	  res=umap[last]-umap[i];
	  cout<<res+2<<endl;
	  }
	}
	return 0;

      
}


     
