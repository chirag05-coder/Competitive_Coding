Link for Ques:
https://practice.geeksforgeeks.org/problems/meta-strings5713/1#


#include<bits/stdc++.h>
using namespace std;
bool metaStrings (string s1, string s2);
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string s1; cin >> s1;
        string s2; cin >> s2;

        cout << metaStrings (s1, s2) << endl;
    }
}
// Contributed By: Pranay Bansal
// } Driver Code Ends



bool metaStrings (string S1, string S2)
{
    // your code here
    int flag=0;
     if(S1.length()!=S2.length())
          return false;
          
          string a,b;
      for(int i=0;i<S1.length();i++)
      {
              if(S1.at(i)!=S2.at(i))
                 {
                      flag++;
                      a.push_back(S1.at(i));
                    //  b.push_back(S2.at(i));
                 }
      }
       if(flag==0)
       {
           return false;
       }
       if(flag==1)
       {
           return false;
       }
      int cnt=0,c=0,d=0;
      for(int i=0;i<S1.length();i++)
      {   if(a.at(0)==S2.at(i) and c==0)
            { cnt++;
               c++;
            }
          if(a.at(1)==S2.at(i) and d==0)     
             {  cnt++;
             d++;
             }
        //   if(b.at(0)==S1.at(i) and e==0)
        //      { cnt++;
        //         e++;
        //      }
        //   if(b.at(1)==S1.at(i) and f==0)
        //   { cnt++;
        //   f++;
        //   }
          
      }
      
      if(flag==2 and cnt==2)
        return true;
    else
    return false;
    
}
