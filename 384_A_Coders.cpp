Link for Ques:
https://codeforces.com/problemset/problem/384/A




 int n;
       cin>>n;
       char arr[n][n];
       
       if(!(n&1))
       {
           cout<<(n/2)*n<<endl;
       }
       else
       {
             int x=ceil(n/2);
             cout<<((x*x)+(n-x)*(n-x))<<endl;
       }
      for(int i=0;i<n;i++)
      {
             for(int j=0;j<n;j++)
              {
                  if(!(i&1))
                  {
                        if(!(j&1))
                         {
                             arr[i][j]='C';
                         }
                         else
                         {
                             arr[i][j]='.';
                         }
                  }
                  else
                  {
                       if(j&1)
                         {
                             arr[i][j]='C';
                         }
                         else
                         {
                             arr[i][j]='.';
                         }
                  }
              }
      }
      
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
             {
                 cout<<arr[i][j];
             }
             cout<<endl;
        }
        
