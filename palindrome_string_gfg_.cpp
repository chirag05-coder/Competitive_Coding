Link For Ques:
https://practice.geeksforgeeks.org/problems/palindrome-string0817/1


 
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++
class Solution{
public:	
	
	
	int isPlaindrome(string S)
	{   int len=S.length()-1;
	    // Your code goes here
	    for(int i=0;i<S.length()/2;i++)
	    {
	           if(S.at(i)!=S.at(len-i))
	              return 0;
	    }  
	    return 1;
	}

};

// { Driver Code Starts.

int main() 
{
   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		string s;
   		cin >> s;

   	    Solution ob;

   		cout << ob.isPlaindrome(s) << "\n";
   	}

    return 0;
}  // } Driver Code Ends
