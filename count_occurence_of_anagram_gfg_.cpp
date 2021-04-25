Link for Ques:
https://practice.geeksforgeeks.org/problems/count-occurences-of-anagrams5839/1#

#include <bits/stdc++.h>

using namespace std;


 // } Driver Code Ends
//User function template for C++
class Solution{
public:
	int search(string pat, string str) {
	    // code here
	    int k=pat.length();
	      unordered_map<char,int>umap,u1;
	    int i=0,j=0;
	    for(int i=0;i<k;i++)
	     {
	       u1[pat.at(i)]++;
	     }
	     int cnt=0;
	    while(j<str.length())
	    {   umap[str.at(j)]++;
	        
	        
	        
	        if(j-i+1==k)
	        {   auto ip=umap.begin();
	           int flag=0;
	            for(auto it:u1)
	            {
	                if(umap.count(it.first))
	                 {
	                     if(umap[it.first]!=it.second)
	                      {  flag++;
	                          break;
	                      }
	                 }
	                 else
	                 {    flag++;
	                     break;
	                 }
	               // if(it.first!=ip->first and it.second!=ip->second)
	               //     { flag++; 
	               //         break;
	                      
	               //     }
	               //     ip++;
	                
	            }
	            if(flag==0)
	            cnt++;
	            
	        
	            umap[str.at(i)]--;
	            if(umap[str.at(i)]==0)
	            {
	                umap.erase(str.at(i));
	            }
	            
	            i++;
	            j++;
	        }
	        
	        
	        
	        
	        if(j-i+1<k)
	         j++;
	    }
	    return cnt;
	}

};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string pat, txt;
        cin >> txt >> pat;
        Solution ob;
        auto ans = ob.search(pat, txt);
        cout << ans << "\n";
    }
    return 0;
}  // } Driver Code Ends
