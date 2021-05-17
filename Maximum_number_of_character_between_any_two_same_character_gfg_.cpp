Link for Ques:
https://practice.geeksforgeeks.org/problems/maximum-number-of-characters-between-any-two-same-character4552/1/?problemStatus=unsolved&problemType=functional&difficulty[]=0&difficulty[]=1&page=2&sortBy=newest&category[]=Arrays&category[]=Strings&category[]=Hash&category[]=STL&category[]=number-theory&category[]=Modular%20Arithmetic&category[]=sliding-window&query=problemStatusunsolvedproblemTypefunctionaldifficulty[]0difficulty[]1page2sortBynewestcategory[]Arrayscategory[]Stringscategory[]Hashcategory[]STLcategory[]number-theorycategory[]Modular%20Arithmeticcategory[]sliding-window#


#include<bits/stdc++.h>
using namespace std;
int maxChars (string s);
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;

        cout << maxChars (s) << endl;
    }
}
// Contributed By: Pranay Bansal
// } Driver Code Ends


int maxChars (string s)
{
   int arr[87]{0};
   for(int i=0;i<s.size();i++)
   {
       char ch=s.at(i);
       if(ch>='a' and ch<='z')
       arr[ch-'a']=i;
       else
       arr[ch-'A'+26]=i;
   }
   int ans=INT_MIN;
   for(int i=0;i<s.size();i++)
   {
       char ch=s.at(i);
       if(ch>='a' and ch<='z')
          ans=max(ans,arr[ch-'a']-i);
       else
        ans=max(ans,arr[ch-'A'+26]-i);
       
   }
   return (ans-1);
}
