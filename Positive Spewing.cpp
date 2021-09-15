Link for Ques:
https://www.codechef.com/START11B/problems/POSSPEW



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
         lli n,k;
         cin>>n>>k;
         lli sum=0;
         
         lli arr[n]{0};
         int O=0;
         lli temp=0;
         for(int i=0;i<n;i++)
         {
              cin>>arr[i];
              if(arr[i]==0)
              {
                  O++;
              }
              temp+=arr[i];
         }
         if(O==n)
         {
             cout<<0<<endl;
         }
         else if(O==0)
         {   
            cout<<(temp + n*2*1LL*k)<<endl;
         }
         else
         {    lli sum=0;
             int flag=0;
             lli temp=n;
               while(flag==0 and k>0)
               {   int zero=0;
                   
                 for(int i=0;i<temp;i++)
                {
                   if(i==0 and arr[0]>0)
                   {  
                        if(arr[i+1]==0)
                        {
                             arr[i+1]+=1;
                             i++;
                        }
                        else
                          arr[i+1]+=1;
                        
                      if(arr[n-1]==0)
                      {
                           temp--;
                             arr[n-1]+=1;
                      }
                      else
                       arr[n-1]+=1;
                   }
                   else if(i==n-1 and arr[n-1]>0)
                    {   
                         arr[n-2]+=1;
                         
                        
                    
                         arr[0]+=1;
                    }
                    else
                    {    if(arr[i]>0)
                         {
                             
                            
                             
                        arr[i-1]+=1;
                        
                          if(arr[i+1]==0)
                              {
                        arr[i+1]+=1;
                             i++;
                              }
                              else
                              arr[i+1]+=1;
                    
                         }
                         }
                    
                    if(arr[i]==0)
                        zero++;
                 }
                 temp=n;
                 
                //  for(auto it:arr)
                //   cout<<it<<" ";
                //   cout<<endl;
                 if(zero==0)
                 {
                     flag++;
                 }
                 k--;
                 
               }
               
                 for(int i=0;i<n;i++)
            {
                 sum+=arr[i];
                // cout<<arr[i]<<" ";
            }
           // cout<<endl<<"sum is: "<<sum<<endl;
            
            //lli gap=sum-temp;
            
            cout<<(sum + n*1LL*2*1LL*k)<<endl;
                
         }
        
           
     }
}



     
