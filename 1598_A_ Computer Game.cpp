Link for Ques:
https://codeforces.com/contest/1598/problem/A



#include<bits/stdc++.h>
#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define lli long long int
using namespace std;
const long long int mod=1e9+7;
// lli power(lli a,lli b)
// {
//      if(b==0 )
//         return 1;
//       if(b==1)
//       return a;
     
//       if(!(b&1)) 
//       return (power(a,b/2)%M)*(power(a,b/2)%M);
//       else
//       return ((a)*(power(a,b/2)%M)%M)*(power(a,b/2)%M);

// }

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
   lli p = (lli)log2(n);
   return (lli)pow(2, p);
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

void printSubsequence(string input, string output)
{
    // Base Case
    // if the input is empty print the output string
    if (input.empty()) {
        cout << output << endl;
        return;
    }
 
    // output is passed with including
    // the Ist character of
    // Input string
    printSubsequence(input.substr(1), output + input[0]);
 
    // output is passed without
    // including the Ist character
    // of Input string
    printSubsequence(input.substr(1), output);
}

lli solve(lli n, lli k)
{

    if (n == 0)
        return 0;

    else if (n == 1)
        return 1;

    else if (n % 2 == 0)
    {
        lli res =k*solve(n/2, k);
        return res%mod;
    }

    else
    {
        lli res =k*solve(n/2,k) + 1;
        return res%mod;
    }
}


int main()
{    fastio;

        
         
         int  t;
         cin>>t;
         while(t--)
         {
             int n;
             cin>>n;
            string a,b;
            cin>>a>>b;
             
             
                 bool flag=true;
                for(int i=0;i<n;i++)
                {
                      if(a.at(i)=='1' and b.at(i)=='1')
                        {
                                flag=false;
                                break;
                        }
                    
                }
                
                if(flag)
                  cout<<"YES"<<endl;
                  else
                  cout<<"NO"<<endl;
                
             
         }
         
       
}



     
