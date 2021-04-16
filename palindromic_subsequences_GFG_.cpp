Link for Ques:
https://practice.geeksforgeeks.org/problems/palindromic-subsequences1335/1


#include <bits/stdc++.h>
using namespace std;
int MinRemove(int n, string s);

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        cout << MinRemove(n, s) << endl;
    }
return 0;
}// } Driver Code Ends


int MinRemove(int n, string s){
    //complete the function here
    int j=n-1;
     for(int i=0;i<n/2;i++,j--)
     {
         if(s.at(i)!=s.at(j))
         return 2;
     }
     return 1;
}
