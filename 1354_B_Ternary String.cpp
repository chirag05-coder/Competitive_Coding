Link for Ques:
https://codeforces.com/contest/1354/problem/B


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
    while(t--){
            string str;
            cin>>str;
            int a=0,b=0,c=0;
            for(int i=0;i<str.length();i++)
            {
                  char ch=str.at(i);
                  if(ch=='1')
                    a++;
                  else if (ch=='2')
                     b++;
                     else
                     c++;
            }
            if(a==0 or b==0 or c==0)
             {
                 cout<<"0"<<endl;
             }
             else
             {     //cout<<"hie"<<endl;
                    int len=INT_MAX;
                    int zero,one,two;
                    int aa=0,bb=0,cc=0;
                    int pos_0=0,pos_1=0,pos_2=0;
                    for(int i=0;i<str.length();i++)
                    {    char ch=str.at(i);
                          if(ch=='1')
                          {  aa++;
                              pos_0=i;
                          }
                     else if (ch=='2')
                       {bb++;
                         pos_1=i;
                       }
                     else
                    { cc++;
                       pos_2=i;
                        
                     }     if(aa and bb and cc)
                          {    set<int>st;
                                st.insert(pos_0);
                                st.insert(pos_1);
                                st.insert(pos_2);
                                
                                int x=(*st.rbegin()- (*st.begin()))+1;
                             //   cout<<x<<endl;
                               len=min(len,x); 
                          }
                        
                    }
                    cout<<len<<endl;
                    
             }
}
}



     
