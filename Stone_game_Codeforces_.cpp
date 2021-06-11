Link for Ques:
https://codeforces.com/contest/1538/problem/A



#include<bits/stdc++.h>
#define ll long long int
#define test while(t--)
#define pb push_back
#define ub upper_bound
#define lb lower_bound
#define mp make_pair
#define xxx exit(0)
#define ain(arr) for (auto &it : arr) cin >> it;
#define fs first
#define sec second
#define op(container) for(auto it: container) cout<<it<<" ";
#define clr cin.ignore(numeric_limits<streamsize>::max(), '\n')
using namespace std;
const int inf = 1e9+7;

// for calculating a to power b...
ll binpow(ll a, ll b)
{
ll res = 1;
while (b > 0)
{
if (b & 1)
res = ((res%inf) * (a%inf))%inf;
a = ((a%inf) * (a%inf))%inf;
b >>= 1;
}
return (res%inf);
}
// for calculating gcd..
ll gcd(ll u, ll v)
{
ll shift;
if (u == 0) return v;
if (v == 0) return u;
shift = __builtin_ctz(u | v);
u >>= __builtin_ctz(u);
do {
v >>= __builtin_ctz(v);
if (u > v) {
ll t = v;
v = u;
u = t;
}
v = v - u;
} while (v != 0);
return u << shift;
}
// for converting string to uppercase....
string to_upper(string a)
{
for (int i=0;i<(int)a.size();++i) if (a[i]>='a' && a[i]<='z') a[i]-='a'-'A';
return a;
}
// for converting string to lowercase....
string to_lower(string a)
{
for (int i=0;i<(int)a.size();++i) if (a[i]>='A' && a[i]<='Z') a[i]+='a'-'A';
return a;
}

bool cmp(int a, int b)
{

if (a % 2 == 0 && b % 2 == 0)
return a < b;

if (a % 2 != 0 && b % 2 != 0)
return b < a;


if (a % 2 != 0)
return true;

return false;
}

int main() {
  int t;
  cin>>t;
  while(t--)
  {
      int n;
      cin>>n;
      int arr[n]{0};
      for(int i=0;i<n;i++)
      {
            cin>>arr[i];   
      }
      int a,b;
      a=*max_element(arr,arr+n);
      b=*min_element(arr,arr+n);
     int flag=0;
       int a1=0,b1=0,c1=0,d1=0;
       for(int i=0;i<n;i++)
       {
             if(arr[i]==a or arr[i]==b)
                {
                    flag++;
                }
                a1++;
                if(flag==2)
                  break;
       }
       flag=0;
       for(int i=n-1;i>=0;i--)
       {
             if(arr[i]==a or arr[i]==b)
                {
                    flag++;
                }
                b1++;
                if(flag==2)
                  break;
       }
       flag=0;
       int bda=0,c=0;
       for(int i=0;i<n;i++)
       {      c1++;
             if(arr[i]==a)
                {    bda++;
                    break;
                    
                }
                if(arr[i]==b)
                {  c++;
                   break;
                    
                }
             
                
                
       }
        for(int i=n-1;i>=0;i--)
       {      c1++;
             if(arr[i]==b and c==0)
                {break;
                    
                }
                if(arr[i]==a and bda==0)
                {
                    break;
                }
                
                
       }
       bda=0,c=0;
         for(int i=n-1;i>=0;i--)
       {      d1++;
             if(arr[i]==a)
                {   bda++;
                    break;
                    
                }
            if(arr[i]==b)
            {
                c++;
                break;
            }
                
                
       }
       for(int i=0;i<n;i++)
       {      d1++;
             if(arr[i]==a and bda==0)
                {break;
                    
                }
            if(arr[i]==b and c==0)
            {
                  break;
            }
                
                
       }
       int ans=min(a1,b1);
         int ans1=min(c1,d1);
         cout<<min(ans,ans1)<<endl;
       
      
      
      
        
  }
}
