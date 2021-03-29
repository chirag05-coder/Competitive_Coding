Link for Ques
https://practice.geeksforgeeks.org/problems/anagram-1587115620/1#

 bool isAnagram(string a, string b){
        
        // Your code here
         map<char,pair<int,int>>umap;
     if(a.length()==b.length())
     {    for(int i=0;i<a.length();i++)
               umap[a[i]].first++;
         for(int i=0;i<b.length();i++)
               umap[b[i]].second++;
        for(auto it:umap)
         {
             if(it.second.first!=it.second.second)
               return false;
         }
         return true;
               
         
     }
     else
     return false;
        
    }
