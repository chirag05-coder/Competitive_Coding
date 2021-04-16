Link for Ques:
https://practice.geeksforgeeks.org/problems/distinct-substrings2516/1/?category[]=Strings&category[]=Hash&category[]=Strings&category[]=Hash&problemStatus=unsolved&problemType=functional&page=1&sortBy=newest&query=category[]Stringscategory[]HashproblemStatusunsolvedproblemTypefunctionalpage1sortBynewestcategory[]Stringscategory[]Hash#




#include <bits/stdc++.h>
using namespace std;
int fun(string s);

int main() {
    int tt;
    string s;
    cin >> tt;
    while (tt--) {
        cin >> s;
        cout<<fun(s)<<endl;
        
    }
    return 0;
}// } Driver Code Ends


int fun(string s)
{
    //code here
    set<string>st;
   string temp="";
   temp.push_back(s.at(0));
   for(int i=1;i<s.length();i++)
   {
       temp.push_back(s.at(i));
       st.insert(temp);
       temp.erase(0,1);
   }
   return st.size();
    
}
