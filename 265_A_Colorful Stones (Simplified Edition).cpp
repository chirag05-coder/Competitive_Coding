Link for Ques:
https://codeforces.com/contest/265/problem/A


#include<bits/stdc++.h>
#define endl "\n"

using namespace std;


int main()
{  
     string a,b;
     cin>>a>>b;
     int cnt=0,j=0;
     for(int i=0;i<b.length();i++)
     {
           if(b.at(i)==a.at(j))
            {
                  cnt++;
                  j++;
            }
     }
     cout<<cnt+1<<endl;
    
}



     
