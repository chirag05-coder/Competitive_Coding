Link for Ques:
https://practice.geeksforgeeks.org/problems/pangram-checking-1587115620/1

#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends

class Solution{
  public:
    // Returns true if the string is pangram else false
    bool checkPangram (string &str)
    {
        // your code here
        transform(str.begin(),str.end(),str.begin(),::tolower);
        unordered_map<char,int>umap;
        for(int i=0;i<str.length();i++)
        {
             char ch=str.at(i);
             if(ch>='a' and ch<='z')
             {
                  umap[ch]++;
             }
        }
        if(umap.size()==26)
           return true;
           else
           return false;
        
    }


};

// { Driver Code Starts.

// Driver Program to test above functions
int main()
{
    int t;
    cin>>t;
    cin.ignore(INT_MAX, '\n');
    while(t--){
        string str;
        getline(cin, str);
        Solution obj;
        if (obj.checkPangram(str) == true)
            cout<<1<<endl;
        else
            cout<<0<<endl;
    }
    return(0);
}
  // } Driver Code Ends
