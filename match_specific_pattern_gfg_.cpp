Link for Ques:
https://practice.geeksforgeeks.org/problems/match-specific-pattern/1



#include <bits/stdc++.h>
using namespace std;

vector<string> findMatchedWords(vector<string> dict,string pattern);

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		vector<string> s(n);
		for(int i=0;i<n;i++)
		    cin>>s[i];
		
		string tt;
		cin>>tt;
		
		vector<string> res = findMatchedWords(s,tt);
        sort(res.begin(),res.end());
		for(int i=0;i<res.size();i++)
		    cout<<res[i]<<" ";
		cout<<endl;
		
	}
}// } Driver Code Ends


/* The function returns a  vector of strings 
present in the dictionary which matches
the string pattern.
You are required to complete this method */

       bool areIsomorphic(string str1, string str2)
{
if(str1.size()!=str2.size())
return false;
unordered_map<char,char>umap;
for(int i=0;i<str1.size();i++)
{
if(umap.find(str1.at(i))!=umap.end())
{
if(umap[str1.at(i)]!=str2.at(i))
return false;
}
else
umap[str1.at(i)]=str2.at(i);
}
umap.clear();
for(int i=0;i<str2.size();i++)
{
if(umap.find(str2.at(i))!=umap.end())
{
if(umap[str2.at(i)]!=str1.at(i))
return false;
}
else
umap[str2.at(i)]=str1.at(i);
}
return true;
}
vector<string> findMatchedWords(vector<string> dict,string pattern)
{
vector<string>res;
for(auto it:dict)
{
if(areIsomorphic(it,pattern))
res.push_back(it);
}
return res;
}
