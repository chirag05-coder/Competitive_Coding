Link for Ques:
https://codeforces.com/contest/1551/problem/B1



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
int t;
cin>>t;
while(t--)
{
   string str;
   cin>>str;
   unordered_map<char,int>umap;
   for(int i=0;i<str.length();i++)
   {
       umap[str.at(i)]++;
   }
   if(str.length()==1)
   {
       cout<<0<<endl;
   }
   else if(umap.size()==1)
   {
        cout<<"1"<<endl;
   }
   else if(umap.size()==str.length())
   {
         cout<<str.length()/2<<endl;
   }
   else
   {
       int r=0,g=0;
       for(auto it:umap)
       {
             if(it.second>1)
             {
                 r++;
                 g++;
             }
             else
             {    
                 if(r>g)
                   g++;
                  else if(g>r)
                    r++;
                    else 
                    r++;
                   
                   
             }
           //  cout<<it.first<<" "<<it.second<<endl;
       }
       cout<<min(r,g)<<endl;
   }
   
}
}


     
