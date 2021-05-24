Link for Ques:
https://practice.geeksforgeeks.org/problems/magical-string3653/1/?page=1&sortBy=newest&category[]=Arrays&category[]=Strings&category[]=Hash&query=page1sortBynewestcategory[]Arrayscategory[]Stringscategory[]Hash#


#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
class Solution{   
public:
    string magicalString(string s){
        
        // code here
        for(int i=0;i<s.length();i++)
        {    char ch =s.at(i);
             s.at(i)='a'+ 'z'-s.at(i);
              
        }
        return s;
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
        cout << ob.magicalString(S) << endl;
    }
    return 0; 
} 
  // } Driver Code Ends
