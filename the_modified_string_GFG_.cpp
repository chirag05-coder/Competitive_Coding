Link For QUes:
https://practice.geeksforgeeks.org/problems/the-modified-string-1587115621/1


#include<bits/stdc++.h>
#define br char xx; cin>>xx; cout<<xx<<endl;
#define lli long long int
using namespace std;


 // } Driver Code Ends


class Solution{
  public:
    int modified (string a){
        // Your code here
        int cnt=0,num=0;
        for(int i=0;i<a.length()-1;i++)
        {
              if(a.at(i)==a.at(i+1))
              {cnt++;}
             
             if(cnt==2)
             {      num++;
                cnt=0;
               
              }
             if(a.at(i)!=a.at(i+1))
                 cnt=0;
             
              
              
           
        }
        return num;
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    string a;
    while(t--){
        cin>>a;
        Solution obj;
        cout<<obj.modified(a)<<endl;
    }
    return 0;
}
  // } Driver Code Ends
