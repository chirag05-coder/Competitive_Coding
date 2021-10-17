Link for Ques:
https://codeforces.com/contest/1283/problem/C



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
       set<int>st;
       
       int n;
       cin>>n;
       for(int i=1;i<=n;i++)
       {
            st.insert(i);
       }
       int arr[n]{0},brr[n]{0};
       vector<int>v;
       for(int i=0;i<n;i++)
       {
             cin>>arr[i];
             brr[i]=arr[i];
             if(st.find(arr[i])!=st.end())
               {
                   st.erase(arr[i]);
               }
               if(arr[i]==0)
                 v.push_back(i+1);
       }
       set<int>final=st;
       vector<int>res=v;
       sort(v.begin(),v.end(),greater<int>());
   
       for(int i=0;i<v.size();i++)
       {
       
           auto it=st.upper_bound(v[i]);
              if(it==st.end())
               {
               
                arr[v[i]-1]=(*st.begin());
                 st.erase(*st.begin());
               }
               else
               {
                      arr[v[i]-1]=(*it);
                      st.erase(*it);
               }
               
       }
        for(int i=0;i<res.size();i++)
       {
       
           auto it=final.upper_bound(res[i]);
              if(it==final.end())
               {
               
                brr[res[i]-1]=(*final.begin());
                 final.erase(*final.begin());
               }
               else
               {
                      brr[res[i]-1]=(*it);
                      final.erase(*it);
               }
               
       }
    //   for(auto it:arr)
    //   {
       
    //       cout<<it<<" ";
    //   }
    //   cout<<endl;
    //     for(auto it:brr)
    //   {
       
    //       cout<<it<<" ";
    //   }
    //   cout<<endl;
       
       int flag=0;
       for(int i=0;i<n;i++)
       {
              if(arr[i]==i+1)
               {
                   flag++;
                   break;
               }
       }
        if(flag==0)
       {
       for(int i=0;i<n;i++)
       {
             cout<<arr[i]<<" ";
       }
     //  cout<<"me"<<endl;
           
       }
      
       else
       {
           for(int i=0;i<n;i++)
       {
             cout<<brr[i]<<" ";
       }
       }
       
       
       
       
       
}



     
