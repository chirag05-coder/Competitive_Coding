Link for Ques:
https://practice.geeksforgeeks.org/problems/good-or-bad-string1417/1/?page=1&sortBy=newest&category[]=Arrays&category[]=Strings&category[]=Hash&query=page1sortBynewestcategory[]Arrayscategory[]Stringscategory[]Hash


// Initial template for C++

#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
// User function template for C++

class Solution {
  public:
    int isGoodorBad(string s) {
        // code here
        int v=0,c=0;
        for(int i=0;i<s.length();i++)
        {   char ch=s.at(i);
             if((0x208222 >> (ch & 0x1f)) & 1)
             {
                   v++;
                   c=0;
             }
             else if(ch=='?')
             {
                  v++;
                  c++;
             }
             else
             {   v=0;
                 c++;
                 
             }
             if(v>5 or c>3)
             {
                   return 0;
             }
               
        }
        return 1;
    }
};

// { Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string S;
        
        cin >> S;
        
        Solution ob;
        cout << ob.isGoodorBad(S) << endl;
    }
    return 0; 
}  // } Driver Code Ends
