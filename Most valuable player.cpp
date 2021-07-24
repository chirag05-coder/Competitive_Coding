Link for Ques:
https://www.codechef.com/CPCD2021/problems/MVP



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
    std::vector<pair<int,string>>winner;
    while(t--){
        string other,another;
        cin>>other;
        cin.ignore();
        getline(cin,another);
        another.push_back(' ');
        string temp;
        map<string,int>umap;
        for(int i=0;i<another.size();i++)
        {
          
            if(another.at(i)==' ')
            {
                umap[temp]++;
                temp.clear();
            }
            else
              temp.push_back(another.at(i));
        }
        int points=0;
        for(auto it:umap)
        {
            if(it.first=="LOOT")
            points+=(10*it.second);
            else if(it.first=="KILL")
            points+=(50*it.second);
            else if(it.first=="REVIVE")
            points+=(100*it.second);
            else if(it.first=="ASSIST")
            points+=(30*it.second);
        }
         winner.push_back({points,other});
    }
     sort(winner.rbegin(), winner.rend());
     cout<<winner[0].second<<'\n';

      
}


     
