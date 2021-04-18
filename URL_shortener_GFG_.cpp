Link for Ques:
https://practice.geeksforgeeks.org/problems/design-a-tiny-url-or-url-shortener2031/1/?category[]=Strings&category[]=Hash&category[]=Strings&category[]=Hash&problemStatus=unsolved&problemType=functional&difficulty[]=0&difficulty[]=1&page=1&sortBy=accuracy&query=category[]Stringscategory[]HashproblemStatusunsolvedproblemTypefunctionaldifficulty[]0difficulty[]1page1sortByaccuracycategory[]Stringscategory[]Hash

#include <bits/stdc++.h>

using namespace std;


 // } Driver Code Ends
//User function template for C++
class Solution{
public:	

	// Function to generate a short url from integer ID
	string idToShortURL(long long int n) {
	    // code here
	   // long long int temp=n;
	     char map[] = "abcdefghijklmnopqrstuvwxyzABCDEF"
                "GHIJKLMNOPQRSTUVWXYZ0123456789";
                string str;
                
                while(n)
                {  
                   str.push_back(map[n%62]);
                   n=n/62;
                }
                reverse(str.begin(),str.end());
                return str;
	}

};

// { Driver Code Starts.

long long shortURLtoID(string);

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        Solution ob;
        auto url = ob.idToShortURL(n);
        auto id = shortURLtoID(url);
        cout << url << "\n" << id << "\n";
    }
    return 0;
}

// Function to get integer ID back from a short url
long long int shortURLtoID(string shortURL) {
    long long int id = 0; // initialize result

    // A simple base conversion logic
    for (int i = 0; i < shortURL.length(); i++) {
        if ('a' <= shortURL[i] && shortURL[i] <= 'z')
            id = id * 62 + shortURL[i] - 'a';
        if ('A' <= shortURL[i] && shortURL[i] <= 'Z')
            id = id * 62 + shortURL[i] - 'A' + 26;
        if ('0' <= shortURL[i] && shortURL[i] <= '9')
            id = id * 62 + shortURL[i] - '0' + 52;
    }
    return id;
}  // } Driver Code Ends
