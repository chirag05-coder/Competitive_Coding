Link for Ques:
https://codeforces.com/contest/1200/problem/A


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

    
    int n;
    cin>>n;
    string str;
    cin>>str;
    std::vector<int>v(10,0);
    set<int>st;
    for(int i=0;i<=9;i++)
    st.insert(i);
    
    for(int i=0;i<str.size();i++)
    {
        if(str.at(i)=='L')
        {
            v[*(st.begin())]=1;
            st.erase(*(st.begin()));
        }
        else if(str.at(i)=='R')
        {
            v[*(st.rbegin())]=1;
            st.erase(*(st.rbegin()));
        }
        else
        {
            v[str.at(i)-'0']=0;
            st.insert(str.at(i)-'0');
        }
    }
    for(auto it:v)
    cout<<it;


            
  
     }



     
