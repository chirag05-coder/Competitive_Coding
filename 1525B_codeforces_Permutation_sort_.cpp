Link for Ques:
https://codeforces.com/problemset/problem/1525/B




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
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n]{0};
        for(auto &it:arr)
         cin>>it;
        
         if(is_sorted(arr,arr+n))
         {
             cout<<"0"<<endl;
         }
         else
         {
             int maxii= *max_element(arr,arr+n);
             int mini = *min_element(arr,arr+n);
             if(maxii==arr[n-1] or mini==arr[0] )
             {
                 cout<<"1"<<endl;
             }
             else if(maxii==arr[0] and mini==arr[n-1])
              {
                  cout<<"3"<<endl;
              }
             else
             {
                 cout<<"2"<<endl;
             }
         }
    }
}
