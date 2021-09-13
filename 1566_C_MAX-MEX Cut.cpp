Link for Ques:
https://codeforces.com/contest/1566/problem/C


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
    while(t--){
        int n;
        cin>>n;
         string str,str1;
         cin>>str>>str1;
         
       
          
          int ans=0;
        
        int temp=0;
          int res=0;
          int flag=0;
          for(int i=0;i<str.size()-1;i++)
          {
              char ch=str.at(i);
                char ch1=str1.at(i);
                
                char aage=str.at(i+1);
                char sec_aage=str1.at(i+1);
                
                if((ch=='0' and ch1=='1') or (ch=='1' and ch1=='0'))
                  {
                      res+=2;
                    //  cout<<"one"<<" "<<res<<endl;
                      //flag=0;
                  }
                  else if(ch=='0' and ch1=='0')
                  {
                         if(aage=='1' and sec_aage=='1')
                             {
                                 res+=2;
                                 //  cout<<"two"<<" "<<res<<endl;
                                   if(i+1==n-1)
                                     flag++;
                                   i++;
                                 
                             }
                             else
                             {res+=1;
                                 
                                  //  cout<<"three"<<" "<<res<<endl;
                             }
                  }
                  else if(ch=='1' and ch1=='1')
                  {
                          if(aage=='0' and sec_aage=='0')
                            {
                                res+=2;
                                 // cout<<"ff"<<" "<<res<<endl;
                                  if(i+1==n-1)
                                 {
                                      flag++;
                                 }
                                  i++;
                                
                            }
                            
                  }
               
          }
          
            char ch=str.at(n-1);
                char ch1=str1.at(n-1);
                
    
                
                if((ch=='0' and ch1=='1') or (ch=='1' and ch1=='0'))
                  {
                      res+=2;
                    
                  }
                  else if(flag==0 and ch=='0' and ch1=='0')
                    res++;
          
         
          cout<<res<<endl;
         
           
     }
}



     
