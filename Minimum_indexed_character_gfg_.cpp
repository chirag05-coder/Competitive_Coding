Link For Ques:
https://practice.geeksforgeeks.org/problems/minimum-indexed-character-1587115620/1

// C++ implementation to find the character in first 
// string that is present at minimum index in second
// string
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


class Solution{
  public:
    int minIndexChar(string str, string patt)
    {
        // Your code here
        unordered_map<char,int>umap;
        for(int i=0;i<str.length();i++)
        {
            char ch=str.at(i);
            if(umap.find(ch)==umap.end())
                 umap[ch]=i;
        }
        int mini=INT_MAX;
        for(int i=0;i<patt.length();i++)
        {
              char ch=patt.at(i);
              if(umap.find(ch)!=umap.end())
              {
                  mini=min(mini,umap[ch]);
              }
        }
        if(mini==INT_MAX)
        return -1;
        
        return mini;
    }
};

// { Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    string str;
	    string patt;
	    cin>>str;
	    cin>>patt;
	    Solution obj;
	    int ans = obj.minIndexChar(str, patt);
	    if(ans == -1)cout<<"No character present";
	    else cout<<str[ans];
	    cout<<endl;
	}return 0;
}
  // } Driver Code Ends
