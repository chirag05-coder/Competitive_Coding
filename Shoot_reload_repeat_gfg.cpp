Link for Question:
https://practice.geeksforgeeks.org/problems/shoot-reload-repeat2415/1

#include<bits/stdc++.h>
using namespace std;

bool isValid (string s, int n);
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;
        int n ; cin >> n;

        cout << isValid (s, n) << endl;
    }
}
// Contributed By: Pranay Bansal
// } Driver Code Ends


bool isValid (string str, int n)
{
    // your code here
    int cnt=n;
    for(int i=0;i<str.length();i++)
    {        
             if(str.at(i)=='S')
               {   if(cnt==0)
                  return false;
                    
                   cnt--;
               }
               if(str.at(i)=='R')
               {
                   cnt=n;
               }
    }
    return true;
}
