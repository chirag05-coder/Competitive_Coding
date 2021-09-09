Link for Ques:
https://codeforces.com/contest/1203/problem/B


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
     while(t--)
     {
           int n;
           cin>>n;
           vector<int>v;
           int x;
          // int onee=0,sevenn=0;
          unordered_map<int,int>umap;
           for(int i=0;i<(4*n);i++)
           {
                 cin>>x;
                 v.push_back(x);
                 umap[x]++;
                
           }
           int flag=0;
           for(auto it:umap)
           {
                 if(it.second&1)
                  {
                       cout<<"NO"<<endl;
                       flag++;
                       break;
                  }
           }
//           cout<<onee<<" "<<sevenn<<endl;
             if(flag==0)
             {
           sort(v.begin(),v.end());
          
            vector<int>res;
            for(int i=1;i<v.size();i+=2)
            {
                  res.push_back(v[i]);
            }
            
            // int one=0,seven=0;
            // for(auto it:res)
            // {     if(it==1)
            //   one++;
            //   else
            //   seven++;
            //      cout<<it<<" ";
            // }
            // cout<<endl;
            // cout<<one<<" "<<seven<<endl;
            
           
          
         
         
          
               unordered_set<int>st;
               for(int i=0;i<(res.size()/2);i++)
               {
                   st.insert(res[i]*(res[res.size()-i-1]));
                   
                   
               }
               if(st.size()==1)
               {
                   cout<<"YES"<<endl;
               }
               else
               {
                   cout<<"NO"<<endl;
               }
             }
            
           
            
  
     }
}


     
