Link for Ques:
https://www.codechef.com/CRKR2021/problems/TDL01



 int n,x;
     cin>>n>>x;
     int arr[n]{0};
     int sum=0;
     for(auto &it:arr)
     {
         cin>>it;
         sum+=it;
     }
     if(sum+x>24)
      {
          cout<<"NO"<<endl;
      }
      else
      {
          cout<<"YES"<<endl;
      }
