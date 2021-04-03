Link For Ques:

https://practice.geeksforgeeks.org/problems/sorting-elements-of-an-array-by-frequency-1587115621/1/?category[]=Mathematical&category[]=Arrays&category[]=Strings&category[]=Mathematical&category[]=Arrays&category[]=Strings&problemStatus=unsolved&problemType=functional&page=1&sortBy=submissions&query=category[]Mathematicalcategory[]Arrayscategory[]StringsproblemStatusunsolvedproblemTypefunctionalpage1sortBysubmissionscategory[]Mathematicalcategory[]Arrayscategory[]Strings

#include <bits/stdc++.h>
using namespace std;



 // } Driver Code Ends

class Solution{
    public:
    //Complete this function
    //Function to sort the array according to frequency of elements.
    vector<int> sortByFreq(int arr[],int n)
    {
         unordered_map<int,int>mp;
       map<int,set<int>>map1;
       vector<int>v;
       for(int i=0;i<n;i++)
       {
           mp[arr[i]]++;
       }
       for(auto it:mp)
       {
           map1[it.second].insert(it.first);
       }
       for(auto it=map1.rbegin();it!=map1.rend();it++)
       {
           
               for(auto ip:map1[it->first])
               {
                   for(int i=1;i<=it->first;i++)
                {
                   v.push_back(ip);
                  }
              }
       }
     
    return v;
    }
};

// { Driver Code Starts.

int main() {
	
	
	int t;
	cin >> t;
	
	
	while(t--){
	    
	    
	    int n;
	    cin >> n;
	    
	    int a[n+1];
	    
	    for(int i = 0;i<n;i++){
	        cin >> a[i];
	    }
	    Solution obj;
	    vector<int> v;
	    v = obj.sortByFreq(a,n);
	    for(int i:v)
	        cout<<i<<" ";
	    cout << endl;
	}
	
	return 0;
}

  // } Driver Code Ends
