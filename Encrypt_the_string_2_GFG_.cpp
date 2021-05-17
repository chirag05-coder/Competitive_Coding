Link for Ques:
https://practice.geeksforgeeks.org/problems/encrypt-the-string-21117/1#

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    string encryptString(string S) {
        // code here
        string str,s;
        s="";
        
        map<char,int>umap;
        for(int i=0;i<S.length()-1;i++)
        {    if(i==S.length()-2)
            {
                 umap[S.at(i+1)]++;
            }
             umap[S.at(i)]++;
             if(S.at(i)!=S.at(i+1))
             {     char ch;
        for(auto it:umap)
        {
             str.push_back(it.first);
              if(it.second>9)
             { std::stringstream ss;
           ss<< std::hex << it.second; // int decimal_value
           std::string res ( ss.str() );
             reverse(res.begin(),res.end());
             str+=res;
             }
             
             else
              {s=to_string(it.second);
             
             str+=s;
             s.clear();
              }
           }
              umap.clear();   
             }
        }
        char ch;
        if(umap.size()>=1)
        {
        for(auto it:umap)
        {
             str.push_back(it.first);
              if(it.second>9)
            {std::stringstream ss;
           ss<< std::hex << it.second; // int decimal_value
           std::string res ( ss.str() );
             reverse(res.begin(),res.end());
             str+=res;
             }
             
             else
              {s=to_string(it.second);
             
             str+=s;
             s.clear();
              }
        }
        }
        reverse(str.begin(),str.end());
        return str;
        
    }
};

// { Driver Code Starts.
int main() {
    long long t;
    cin >> t;
    while (t--) {
        string S;
        cin>>S;

        Solution ob;
        cout<<ob.encryptString(S)<<endl;
    }
    return 0;
}  // } Driver Code Ends
