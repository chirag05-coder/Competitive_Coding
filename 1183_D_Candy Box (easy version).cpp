Link for Ques:
https://codeforces.com/contest/1183/problem/D



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
bool isPerfectSquare(long double x)
{
    // Find floating point value of
    // square root of x.
    if (x >= 0) {
 
        long long sr = sqrt(x);
         
        // if product of square root
        //is equal, then
        // return T/F
        return (sr * sr == x);
    }
    // else return false if n<0
    return false;
}


int main()
{    fastio;
       int t;
       cin>>t;
       while(t--)
       {
                int n;
                cin>>n;
                unordered_map<int,int>umap;
                int u;
                for(int i=0;i<n;i++)
                {
                      cin>>u;
                      umap[u]++;
                }
                priority_queue<int>pq;
                priority_queue<int,vector<int>,greater<int>>asc;
                for(auto it:umap)
                 {
                      pq.push(it.second);
                 }
                 
                 lli ans=0;
                  ans+=pq.top();
                  asc.push(pq.top());
                  pq.pop();
                //      set<int>st;
                //  st.insert(pq.top());
                //  pq.pop();
                //  int prev_ans=ans;
                
                //  while(!pq.empty())
                //  {
                //       if(st.find(pq.top())!=st.end())
                //       {
                //              int val=pq.top();
                //               while(val>0 and st.find(val)!=st.end())
                //               {
                //                     val--;
                //               }
                //               ans+=val;
                //               st.insert(val);
                //       }
                //       else
                //       {
                //           st.insert(pq.top());
                //           ans+=pq.top();
                //       }
                //       pq.pop();
                     
                //  }
                //  cout<<ans<<endl;
                while(!pq.empty())
                {
                      if(pq.top()>=asc.top())
                       {      if(asc.top()-1<=0)
                              {
                                  
                                  break;
                              }
                              ans+=asc.top()-1;
                              asc.push(asc.top()-1);
                            
                       }
                       else
                       {
                           ans+=pq.top();
                           asc.push(pq.top());
                       }
                         pq.pop();
                }
                cout<<ans<<endl;
                 
       }
}



     
