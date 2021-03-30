Link for Question:
https://practice.geeksforgeeks.org/problems/implement-atoi/1/?category[]=Mathematical&category[]=Arrays&category[]=Strings&category[]=Hash&category[]=logical-thinking&category[]=Mathematical&category[]=Arrays&category[]=Strings&category[]=Hash&category[]=logical-thinking&problemStatus=unsolved&problemType=functional&page=1&sortBy=submissions&query=category[]Mathematicalcategory[]Arrayscategory[]Stringscategory[]Hashcategory[]logical-thinkingproblemStatusunsolvedproblemTypefunctionalpage1sortBysu


 #include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution{
    public:
        /*You are required to complete this method */
    int atoi(string str)
    {
        //Your code here
        int flag=0;
     for(int i=0;i<str.length();i++)
     {
             if(str.at(0)=='-')
                 { str.erase(0,1);
                     flag++;
                 }
             else if(isdigit(str.at(i)))
             {}
             else
             {
                 return -1;
             }
     }
     int temp=stoi(str);
     if(flag==0)
     return temp;
     else
     return (-1)*temp;
    }
};

// { Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		Solution ob;
		cout<<ob.atoi(s)<<endl;
	}
}  // } Driver Code Ends
