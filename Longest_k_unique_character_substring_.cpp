Link for Ques:
https://practice.geeksforgeeks.org/problems/longest-k-unique-characters-substring0853/1#


#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution{
    public:
    int longestKSubstr(string s, int k) {
    // your code here
    unordered_map<char,int>umap;
    int j=0,i=0;
    int cnt=0,maxii=INT_MIN;
    int flag=0;
    while(j<s.length())
    {       umap[s[j]]++;
            
        
            if(umap.size()>k)
            {   flag++;   
            //cout<<cnt<<endl;
                 
             if(cnt>maxii)
                  maxii=cnt;
                  
                  cnt++;
                  
               while(umap.size()>k) 
               {     
                   umap[s[i]]--;
                   cnt--;
                   if(umap[s[i]]==0)
                   {
                        umap.erase(s[i]);
                   }
                   i++;
                   
               }
               
             
                }
                else
                cnt++;
        
         j++;
    }
   // cout<<cnt<<endl;
    if(umap.size()==k and cnt>maxii)
      maxii=cnt;
    if(flag==0 and umap.size()!=k)
    return -1;
    return maxii;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int k;
        cin >> k;
        Solution ob;
        cout << ob.longestKSubstr(s, k) << endl;
    }
}
  // } Driver Code Ends
