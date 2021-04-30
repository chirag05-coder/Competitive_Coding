Link for Ques:
https://www.codechef.com/LTIME95B/problems/BENCHP

#include<bits/stdc++.h>
#define lli long long int
using namespace std;
int main()
{    
   int test;
    cin>>test;
    while(test--)
    {
        lli n,weight,rod;
         cin>>n>>weight>>rod;
         unordered_map<lli,lli>umap;
         lli temp;
         for(lli i=1;i<=n;i++)
         {
             cin>>temp;
             umap[temp]++;
         }
         if(rod>=weight)
         {
             cout<<"YES"<<endl;
         }
         else
         {    
    
         lli  total=0,flag=0;
         total+=rod;
           for(auto it:umap)
           {
               if(it.second>1)
               {
                     if(it.second%2==0)
                     {
                         total+=it.second*it.first;
                       
                         if(total>=weight)
                         {
                             
                             flag++;
                             break;
                         }
                     }
                     else
                     {   int g=it.second/2;
                          total+=(g*2)*it.first;
                          
                          if(total>=weight)
                          {
                             
                             flag++;
                             break;
                          }
                         
                     }
               }
           }
           if(flag)
           {
               cout<<"YES"<<endl;
           }
           else
           {
               cout<<"NO"<<endl;
           }
             
             
             
         }
    }
     
}
