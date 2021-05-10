Link for Ques:
https://practice.geeksforgeeks.org/problems/maximum-sub-array5443/1/?category[]=Arrays&category[]=Strings&category[]=Hash&category[]=Arrays&category[]=Strings&category[]=Hash&problemStatus=unsolved&problemType=functional&difficulty[]=1&page=1&sortBy=submissions&query=category[]Arrayscategory[]Stringscategory[]HashproblemStatusunsolvedproblemTypefunctionaldifficulty[]1page1sortBysubmissionscategory[]Arrayscategory[]Stringscategory[]Hash#


#include <bits/stdc++.h>

using namespace std;

 // } Driver Code Ends
//User function template for C++
class Solution{
public:
	vector<int> findSubarray(int arr[], int n) {
	    // code here
	    int i=0,j=0;
	    int sum=0;
	    int maxii=INT_MIN;
	    vector<int>v;
	    int cnt=0;
	    while(j<n)
	    {
	          if(arr[j]>=0)
	           {
	               sum+=arr[j];
	               v.push_back(arr[j]);
	               cnt++;
	           }
	           else
	           {
	                 if(sum>maxii)
	                 {   int x=v.size()-cnt;
	                      if(v.size()>=cnt)
	                    v.erase(v.begin(),v.begin()+x);     
	                    maxii=sum;
	                 }
	                 else
	                 {
	                       while(cnt--)
	                       {
	                           v.pop_back();
	                       }
	                 }
	                     
	                 
	                
	                sum=0;
	                
	                cnt=0;
	                }  
	                j++;
	           }
	           
	        
	    
	                      if(sum>maxii)
	                 {   int x=v.size()-cnt;
	                      if(v.size()>=cnt)
	                    v.erase(v.begin(),v.begin()+x);     
	                    maxii=sum;
	                 }
	                  else
	                 {
	                       while(cnt--)
	                       {
	                           v.pop_back();
	                       }
	                 }
	                 if(v.size()==0)
	                   v.push_back(-1);
	    return v;
	}
};

// { Driver Code Starts.

void printAns(vector<int> &ans) {
    for (auto &x : ans) {
        cout << x << " ";
    }
    cout << "\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int a[n];
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findSubarray(a, n);
        printAns(ans);
    }
    return 0;
}
  // } Driver Code Ends
