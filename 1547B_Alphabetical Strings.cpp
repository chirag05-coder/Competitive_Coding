Link for Ques:
https://codeforces.com/problemset/problem/1547/B


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
{
     string str;
     cin>>str;
     int flag=0;
     
     unordered_map<char,int>umap;
     if(str.find("a")==string::npos)
       cout<<"NO"<<endl;
       else
       {
       
          for(int i=0;i<str.length();i++)
        {     if(umap.find(str.at(i))==umap.end())
           umap[str.at(i)]=i;
           else
           {
              // cout<<"NO"<<endl;
               flag++;
               break;
           }
           
         }
     char ch='a';
     int left=0,right=0,pos=0;
      pos=umap[ch];
      if(pos-1>=0)
      left=pos-1;
      else
      left=INT_MIN;
      if(pos+1<str.length())
      right=pos+1;
      else
      right=INT_MAX;
      for(int i=1;i<str.length();i++)
     {      ch++;
           if(umap.find(ch)==umap.end())
                flag++;
          if(umap[ch]==left)
           {
                 if(left-1>=0)
                   {
                       left--;
                   }
           }
           else if(umap[ch]==right)
           {
                if(right+1<str.length())
                 {
                      right++;
                 }
           }
           else
           {
              // cout<<"N0"<<endl;
               flag++;
               break;
           }
              
     }
     if(flag)
     cout<<"NO"<<endl;
     else
     cout<<"YES"<<endl;
     
    
     
     
     
     
     
     
     
       }
}

      
}


     
