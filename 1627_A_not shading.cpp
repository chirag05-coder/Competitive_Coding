Link for Ques:
https://codeforces.com/contest/1627/problem/A



#include<bits/stdc++.h>
using namespace std;

void fun(int arr[][32], int start, int var){
    int cnt=0;
    for (int i = 31; i >= 0; i--) {
        int k = var >> i;
        if (k & 1)
            arr[start][i]=1;
        else
           arr[start][i]=0;
           
          
    }
}
int main()
{
    int t;
    cin>>t;
   // int count=0;
  
    while(t--)
    {    int n,m,x,y;
    cin>>n>>m>>x>>y;
    char arr[n][m];
     bool flag=false;
    for(int i=0;i<n;i++)
    {
          for(int j=0;j<m;j++)
          {
                cin>>arr[i][j];
                
                if(arr[i][j]=='B')
                  flag=true;
          }
    }
       if(flag==false)
       {
             cout<<"-1"<<endl;
       }
      else if(arr[x-1][y-1]=='B')
      {
            cout<<"0"<<endl;
      }
      else
      {  bool flag=false;
          for(int j=0;j<m;j++)
           {
                 if(arr[x-1][j]=='B')
                  flag=true;
           }
           for(int i=0;i<n;i++)
            {
                  if(arr[i][y-1]=='B')
                     flag=true;
            }
            if(flag)
            cout<<"1"<<endl;
            else
            cout<<"2"<<endl;
      }
        
    }
       
    
   
}
