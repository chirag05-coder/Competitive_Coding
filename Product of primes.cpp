Link for Ques:
https://practice.geeksforgeeks.org/problems/product-of-primes5328/1#



// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++
long long M=1e9+7;

class Solution{
public:
  
  bool seive[1000005];
void createseive()
{
  memset(seive,true,sizeof(seive));
    seive[0]=false;
    seive[1]=false;
    for(int i=2;i*i<=1000000;i++)
    {
           if(seive[i])
            {
                for(int j=i*i;j<=1000000;j+=i)
                  {
                      seive[j]=false;
                  }
            }
    }
}
       
      vector<int> createarr(long long R)
      {    vector<int>factors;
          for(int i=2;i<=R;i++)
          {
                if(seive[i])
                  factors.push_back(i);
                 
          }
          return factors;
      }
      
  
    long long primeProduct(long long L, long long R){
        // code here
        createseive();
         vector<int>factors=createarr(sqrt(R));
       
        bool dummy[R-L+2];
         for(int i=0;i<=R-L+1;i++)
         {
             dummy[i]=true;
         }
         
         for(auto it:factors)
         {  
               int firstMultiple=(L/it)*it;
               
                 if(firstMultiple<L)
                 {
                       firstMultiple+=it;
                 }
               
               
               for(int j=max(firstMultiple,(it*it));j<=R;j+=it)
                 {
                       dummy[j-L]=false;
                 }
               
         }
       
         long long pro=1;
      for(int i=L;i<=R;i++)
         {
                if(dummy[i-L])
                 { // cout<<i<<" ";
                     pro=(pro*i)%(M);
                 }
         }
        // cout<<endl;
         //cout<<endl;
         return pro;
        
      
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        long long L, R;
        cin>>L>>R;
        
        Solution ob;
        cout<<ob.primeProduct(L, R)<<"\n";
    }
    return 0;
}  // } Driver Code Ends
