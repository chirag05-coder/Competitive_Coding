Link for Ques:
https://www.codechef.com/LTIME96B/problems/CHARGES


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
{    int n,k;
cin>>n>>k;
string str;
cin>>str;
int arr[k]{0};
for(int i=0;i<k;i++)
    cin>>arr[i];
    
    int cost=0;
    for(int i=0;i<str.length()-1;i++)
    {    if(str.at(i)==str.at(i+1))
             {cost+=2;}
             else
             cost++;
        
    }
    
    for(int i=0;i<k;i++)
    {    if(n==1)
         {    cout<<"0"<<endl;
     	 }
	 else
	 {   int pos=arr[i];
	      pos--;
	 
	
	   
        if(pos==0)
        {     if(str.at(1)==str.at(0))
               {
                     cost-=2;
                     cost+=1;
               }
               else
               {   cost-=1;
                    cost+=2;
                   
               }
            
        }
        else if(pos==n-1)
        {     if(str.at(n-1)==str.at(n-2))
                 {
                       cost-=1;
                      
                 }
                 else
                 {
                    
                     cost+=1;
                 }
            
        }
        else
        {      if(str.at(pos)==str.at(pos+1) and str.at(pos)==str.at(pos-1) )
                  {
                        cost-=2;
                       
                  }
                  else if(str.at(pos)!=str.at(pos+1) and str.at(pos)!=str.at(pos-1))
                     {
                          
                          cost+=2;
                          
                     }
        }
        cout<<cost<<endl;
        
        if(str.at(pos)=='0')
            {
                  str.at(pos)='1';
            }
            else
            {
                str.at(pos)='0';
            }
        }
            
        
        
    }
    

      
}
  
    

      
}


     
