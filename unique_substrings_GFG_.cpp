Link for Ques:
https://practice.geeksforgeeks.org/problems/unique-substrings1418/1/?category[]=Arrays&category[]=Strings&category[]=Hash&category[]=Arrays&category[]=Strings&category[]=Hash&problemStatus=unsolved&problemType=functional&page=1&sortBy=newest&query=category[]Arrayscategory[]Stringscategory[]HashproblemStatusunsolvedproblemTypefunctionalpage1sortBynewestcategory[]Arrayscategory[]Stringscategory[]Hash#





#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends






class Solution
{
	public:
		long int unique_substring_sum(string s, int k)
		{
		   
		    int n=s.length();
		    if(n%k!=0)
		    return -1;
		    string str;
		    unordered_map<string,int>umap;
		   for(int i=0;i<s.length();i++)
		   {    str.push_back(s.at(i));
		       if((i+1)%k==0)
		       {   umap[str]++;
		            str.clear();
		           
		       }
		   }
		   long int sum=0;
		    for(auto it:umap)
		    {   string temp(it.first);
		         int k=0;
		         for(int i=temp.length()-1;i>=0;i--)
		         {      char ch=temp.at(i);
		               sum+=pow(2,k)*(ch-'0');
		               k++;
		         }
		        
		        
		        
		        
		        //cout<<it.first<<" "<<it.second<<endl;
		    }
		    return sum;
		}
};


// { Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	string s;
    	int k;
    	cin >> s >> k;
        Solution ob;
    	long int ans  = ob.unique_substring_sum(s, k);
    	cout << ans << "\n";
    }
	return 0;
}
  // } Driver Code Ends
