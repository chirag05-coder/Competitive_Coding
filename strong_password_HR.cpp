Link for Ques:

https://www.hackerrank.com/challenges/strong-password/problem

#include <bits/stdc++.h>

using namespace std;

// Complete the minimumNumber function below.
int minimumNumber(int n, string str) {
    // Return the minimum number of characters to make the password strong
        int a=0,b=0,c=0,d=0,cnt=0;
        string s="!@#$%^&*()-+";
        int len=str.length();
        for(int i=0;i<n;i++)
        {
                if((str.at(i)>='0' and  str.at(i)<='9') and a==0)
                        {   cnt++;
                            a++;
                        }
                 else if((str.at(i)>='a' and str.at(i)<='z') and b==0)
                     { b++;
                     cnt++;
                     }
                 else if((str.at(i)>='A' and str.at(i)<='Z') and c==0)
                      {c++;
                      cnt++;
                      }
                 else if(d==0  and s.find(str.at(i))!=string::npos)
                { d++;
                cnt++;  }  
                             
        }
       // cout<<cnt<<endl;
            if(cnt==4 and len>=6)
                 return 0;
              
             else if(cnt<4 and len>=6)
              {
                     return 4-cnt;
              }
             else 
              {     
                  int x=4-cnt;
                  if(x==0)
                  {
                  
                        return 6-len;
                  }
                 
                else if((x+len<6)) 
                    {
                        len=len+x;
                    
                     return x+6-len;
                     
                    } 
                    else
                    return x;
                     
                     
                   
              } 
           

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string password;
    getline(cin, password);

    int answer = minimumNumber(n, password);

    fout << answer << "\n";

    fout.close();

    return 0;
}
