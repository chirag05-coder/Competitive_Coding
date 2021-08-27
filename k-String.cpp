Link for Ques:
https://codeforces.com/contest/219/problem/A


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
{   fastio;
    int k;
    cin>>k;
    string str;
    cin>>str;
    
    if(str.length()%k==0)
    {
          unordered_map<char,int>umap;
           for(auto it:str)
           {
                 umap[it]++;
           }
            int flag=0;
            string st;
           for(auto it:umap)
           {
                 if((it.second%k)!=0)
                 {
                       flag++;
                       break;
                 }
                 else
                 {  int ele=it.second/k;
                    while(ele--)
                    {
                        st.push_back(it.first);
                    }
                     
                     
                 }
                
                 
                 
           }
            if(flag)
                 {
                     cout<<"-1"<<endl;
                 }
                 else
                 {     string temp=st;
                     while(st.length()!=str.length())
                       {
                           st+=temp;
                       }
                       cout<<st<<endl;
                 }
    }
    else
    {
        cout<<"-1"<<endl;
    }
	
	 
	
}

     
