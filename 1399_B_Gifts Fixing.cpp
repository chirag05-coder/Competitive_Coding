Link for Ques:
https://codeforces.com/contest/1399/problem/B



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
             int mini_A=INT_MAX,mini_B=INT_MAX;
            int arr[n]{0};
            int brr[n]{0};
            for(int i=0;i<n;i++)
                 {
                       cin>>arr[i];
                        mini_A=min(mini_A,arr[i]);
                 }
                 
                  for(int i=0;i<n;i++)
                 {
                       cin>>brr[i];
                        mini_B=min(mini_B,brr[i]);
                 }
             lli op=0;
                 
            for(int i=0;i<n;i++)
            {
                 if(arr[i]!=mini_A and brr[i]!=mini_B)
                    {
                            if(arr[i]<brr[i])
                             {
                                   op+=arr[i]-mini_A;
                                   brr[i]-=(arr[i]-mini_A);
                                   if(brr[i]>mini_B)
                                    {
                                        op+=(brr[i]-mini_B);
                                    }
                                   
                             }
                             else
                             {
                                 op+=brr[i]-mini_B;
                                 arr[i]-=(brr[i]-mini_B);
                                 if(arr[i]>mini_A)
                                 {
                                     op+=arr[i]-mini_A;
                                 }
                             }
                            
                            
                            // cout<<"op: "<<op<<endl;
                             
                    }
                    else if(arr[i]==mini_A and brr[i]!=mini_B)
                      {
                            op+= brr[i]-mini_B;
                             // cout<<"op: "<<op<<endl;
                      }
                      else if(arr[i]!=mini_A and brr[i]==mini_B)
                      {
                            op+= arr[i]-mini_A;
                            //  cout<<"op: "<<op<<endl;
                      }
                    
                
            }
            cout<<op<<endl;
            
                
}
}



     
