Link For Ques:
https://practice.geeksforgeeks.org/problems/check-if-two-strings-are-k-anagrams-or-not/1#


#include<iostream>
using namespace std;
const int MAX_CHAR = 26;
bool areKAnagrams(string str1, string str2, int k);
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string str1,str2;
		cin>>str1>>str2;
		int k;
		cin>>k;
		if (areKAnagrams(str1, str2, k) == true)
			cout<<"1\n";
		else
			cout<<"0\n";
	}
}// } Driver Code Ends

#include<bits/stdc++.h>
/*Complete the function below*/
bool areKAnagrams(string str1, string str2, int k)
  {
    //add code here.
    if(str1.length()!=str2.length())
        return false;
    unordered_map<char,int>umap;
    for(int i=0;i<str1.length();i++)
       umap[str1.at(i)]++;
       int cnt=0;
       for(int i=0;i<str2.length();i++)
       {
           if(umap.find(str2.at(i))!=umap.end())
           {
               if(umap[str2.at(i)]==0)
               {
                   cnt++;
                   umap.erase(str2.at(i));
               }
               else
               {
                   umap[str2.at(i)]--;
               }
               
           }
           else
           cnt++;
       }
       if(k>=cnt)
       return true;
       else
       return false;
   }
