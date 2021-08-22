Link for Ques:
https://codeforces.com/problemset/problem/154/A



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



int main()
{    fastio;
string str;
   cin>>str;
   int len=str.length();
   int cnt=0;
    int n;
    cin>>n;
    while(n--)
    {
        char a,b;
        cin>>a>>b;
        unordered_map<char,int>umap;
        for(int i=0;i<len;)
        {   char ch=str.at(i);
            if(ch==a or ch==b)
            {
                  while(ch==a or ch==b)
                  {
                      umap[ch]++;
                      i++;
                      if(i<len)
                      ch=str.at(i);
                      else
                      break;
                  }
                  if(umap.size()==2)
                    {
                        cnt+=min(umap[a],umap[b]);
                    }
                    umap.clear();
                  
            }
            else
            i++;
            
        }
        
    }
    cout<<cnt<<endl;
    
   
}


     
