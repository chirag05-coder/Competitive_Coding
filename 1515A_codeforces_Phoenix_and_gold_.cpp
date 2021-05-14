Link for Ques:
https://codeforces.com/problemset/problem/1515/A


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
{    fastio;
lli t;
cin>>t;
while(t--)
{        
       int n,x;
       cin>>n>>x;
       int arr[n]{0};
       int sum=0,flag=0;
       
       for(int i=0;i<n;i++)
        {
              cin>>arr[i];
              if(arr[i]>x)
              {
                  flag++;
              }
              sum+=arr[i];
        }
        if(flag==1 or sum>x or sum<x)
        {   sort(arr,arr+n,greater<int>());
            if(flag==1)
            {
            
            cout<<"YES"<<endl;
            for(auto it:arr)
             {
                 cout<<it<<" ";
             }
             cout<<endl;
            }
            else
            {    int temp=0;
                for(int i=0;i<n;i++)
                {    temp+=arr[i];
                    if(temp==x)
                    {
                        swap(arr[i],arr[i+1]);
                    }
                    
                }
                cout<<"YES"<<endl;
            for(auto it:arr)
             {
                 cout<<it<<" ";
             }
             cout<<endl;
            }
                
                
            }
        else
        {
            cout<<"NO"<<endl;
        }
        
       
}
}
