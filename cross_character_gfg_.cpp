Link for QUes:
https://practice.geeksforgeeks.org/problems/cross-character2630/1


#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
class Solution{   
public:
    string crossPattern(string str){
        // code here 
        
        
        int k=0;
        int n=str.length();
        vector<vector<char>>v(n,vector<char>(n,' '));
        
        
        for(int i=0,j=0;i<str.length();i++,j++)
        {   v[i][j]=str.at(k++);
            
        }
        k=0;
        for(int i=n-1,j=0;i>=0;i--,j++)
        {
              v[i][j]=str.at(k++);
        }
        str.clear();
        for(auto it:v)
        {
            for(auto ip:it)
             {
                 str.push_back(ip);
             }
        }
        return str;
        
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
        cout << ob.crossPattern(S) << endl;
    }
    return 0; 
}   // } Driver Code Ends
