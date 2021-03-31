Link for Ques:
https://practice.geeksforgeeks.org/problems/string-reversalunpublished-for-now5324/1/?category[]=Mathematical&category[]=Arrays&category[]=Strings&category[]=Hash&category[]=Mathematical&category[]=Arrays&category[]=Strings&category[]=Hash&problemStatus=unsolved&problemType=functional&page=1&sortBy=newest&query=category[]Mathematicalcategory[]Arrayscategory[]Stringscategory[]HashproblemStatusunsolvedproblemTypefunctionalpage1sortBynewestcategory[]Mathematicalcategory[]Arrayscategory[]Stringscategory[]Hash#

#include <bits/stdc++.h>
using namespace std;
string reverseString(string s);
int main()
{
	int t;
	cin>>t;
	cin.ignore();
	while(t--)
	    {
	        string s;
	        getline(cin,s);
	        cout<<reverseString(s)<<endl;
	    }
}
// } Driver Code Ends


string reverseString(string s)
{    int arr[26]{0};
string str="";
int n=s.length()-1;
        for(int i=n;i>=0;i--)
        {     if(s.at(i)!=' ')
        {
              int x=s.at(i)-'A';
               arr[x]++;
              if(arr[x]==1)
              {   //char ch=i+'A';
                  s.push_back(s.at(i));
              }
        }
        }
        s.erase(0,n+1);
       return s;
        //s.clear();
        // for(int i=25;i>=0;i--)
        // {     if(arr[i]==1)
        //       {
        //           char ch=i+'A';
        //           s.push_back(ch);
        //       }
            
        // }
        // return s;
    //code here.
}
