Link for Ques:
https://www.codechef.com/MAY21C/problems/TCTCTOE

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
int t;
cin>>t;
while(t--)
{        
       char mat[3][3];
       int sum_r=0,sum_c=0,cnt=0,u=0,x1=0,o1=0;
       vector<pair<int,int>>x;
       vector<pair<int,int>>o;
       for(int i=0;i<3;i++)
       {
           for(int j=0;j<3;j++)
           {    cin>>mat[i][j];
                   if(mat[i][j]=='X')
                    {      x1++;
                          x.push_back(make_pair(i,j));
                    }
                    if(mat[i][j]=='O')
                        {
                            o.push_back({i,j});
                            o1++;
                        }
                    
              
               
           }
           
       }
        int cnt_x=x1, cnt_o=o1;
       char arr[3][3];
       int k=1;
       int flag=0;
       for(int i=0;i<3;i++)
       {   
           for(int j=0;j<3;j++)
            {   
                if(x1==0 and o1==0)
                {
                     break;
                }
                
                if(k&1)
                {
                if(x.size()!=0)
                {  auto it=x.rbegin();
                    arr[it->first][it->second]='X';
                    x.pop_back();
                     x1--;
                }
                else
                {
                    flag++;
                    break;
                }
                }
                else
                {
                if(o.size()!=0)
                {  auto it=o.rbegin();
                    arr[it->first][it->second]='O';
                    o.pop_back();
                     o1--;
                }
                else
                {
                    flag++;
                    break;
                }
                }
                k++;
                
            }
            if(flag or (x1==0 and o1==0))
             break;
       }
    //   for(int i=0;i<3;i++)
    //   {
    //         for(int j=0;j<3;j++)
    //           {
    //               cout<<arr[i][j]<<" ";
    //           }
    //           cout<<endl;
    //   }
       //cout<<endl;
      
       if(flag)
       {
            cout<<"3"<<endl;
       }
       else
       {     int x=264,o=237,a=0;
            int dr=0,dl=0,sum_c=0,sum_r=0,u=0,cnt=0;
            
           for(int i=0;i<3;i++)
           {       int j=0;
               for( j=0;j<3;j++)
               {   
                   if(mat[i][j]=='_')
                     {
                         u++;
                     }
                   if(i==j)
                   {
                       dl+=mat[i][j];
                   }
                  if(i+j==2)
                  {
                      dr+=mat[i][j];
                  }
                  sum_c+=mat[j][i];
                  sum_r+=mat[i][j];
               }
               if(sum_c==x or sum_c==o)
               {     if(mat[i][i]=='X')
                        {
                            a++;
                        }
                   cnt++;
               }
               if(sum_r==x or sum_r==o)
               {   if(mat[i][0]=='X')
                     {
                         a++;
                     }
                   
                 cnt++;
               }
               sum_r=0;
               sum_c=0;
           }
           if(dl==x or dl==o)
           {    if(mat[1][1]=='X')
                    a++;
                cnt++;
           }
           if(dr==x or dr==o)
           {   if(mat[1][1]=='X')
                    a++;
               cnt++;
           }
         if(cnt==1) 
         {     if(a>0)
             {
             if((cnt_x>cnt_o))
             cout<<"1"<<endl;
             else
             cout<<"3"<<endl;
             }
             else
             {
                 if(cnt_x==cnt_o)
                  {
                      cout<<"1"<<endl;
                  }
                  else
                  {
                      cout<<"3"<<endl;
                  }
             }
                 
        }
         else if(cnt==0 and u==0)
         {
             cout<<"1"<<endl;
         }
         else if(cnt>1 and a==2)
          {
              cout<<"1"<<endl;
          }
         else if(cnt>1)
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
