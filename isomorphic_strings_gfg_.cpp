Link for Ques:
https://practice.geeksforgeeks.org/problems/isomorphic-strings-1587115620/1#


// C++ program to check if two strings are isomorphic
#include<iostream>
#include<string.h>

using namespace std;
#define MAX_CHARS 256

 // } Driver Code Ends

#include<bits/stdc++.h>
class Solution{
  public:
    // This function returns true if str1 and str2 are ismorphic
    // else returns false
    bool areIsomorphic(string str1, string str2)
    {     
        if(str1.size()!=str2.size())
       return false;
       unordered_map<char,char>umap;
       for(int i=0;i<str1.size();i++)
       {
           if(umap.find(str1.at(i))!=umap.end())
           {
               if(umap[str1.at(i)]!=str2.at(i))
                 return false;
                 
           }
           else
           umap[str1.at(i)]=str2.at(i);
       }
       umap.clear();
        for(int i=0;i<str2.size();i++)
       {
           if(umap.find(str2.at(i))!=umap.end())
           {
               if(umap[str2.at(i)]!=str1.at(i))
                 return false;
                 
           }
           else
           umap[str2.at(i)]=str1.at(i);
       }
       return true;
        
    }
};

// { Driver Code Starts.

// Driver program
int main()
{
    int t;
    cin>>t;
    string s1,s2;
    while (t--) {
        cin>>s1;
        cin>>s2;
        Solution obj;
        cout<<obj.areIsomorphic(s1,s2)<<endl;
    }
    
    return 0;
}  // } Driver Code Ends
