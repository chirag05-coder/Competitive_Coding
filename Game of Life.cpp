Link for Ques:
https://codeforces.com/contest/1523/problem/A


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
      int t;
      cin>>t;
      while(t--)
      {
            lli n,m;
            cin>>n>>m;
            string str;
            cin>>str;
            //cout<<str<<endl;
            vector<int>v;
            for(int i=0;(i<str.length() and m>0);i++)
             {
                    int flag=0;
                 for(int j=0;j<str.length();j++)
                  {     char ch=str.at(j);
                      if(j-1>=0 and j+1<n and ch=='0')
                        {
                              if(str.at(j-1)=='1' and str.at(j+1)!='1')
                                    {
                                       // str.at(j)='1';
                                        v.push_back(j);
                                        flag++;
                                    }
                                    else if(str.at(j-1)!='1' and str.at(j+1)=='1')
                                    {
                                       // str.at(j)='1';
                                       v.push_back(j);
                                       
                                        flag++;
                                    }
                                    
                        }
                        if(str.at(0)=='0' and str.at(1)=='1')
                          {
                                str.at(0)='1';
                                flag++;
                          }
                          if(str.at(n-1)=='0' and str.at(n-2)=='1')
                          {
                                 str.at(n-1)='1';
                                 flag++;
                          }
                      
                        
                  }
                      m--;
                  
                  if(flag==0)
                  break;
                  for(auto it:v)
                  {
                      str.at(it)='1';
                  }
                  v.clear();
             }
             cout<<str<<endl;
            
      }
	 
	
}

     
