Link for Ques:
https://leetcode.com/problems/longest-consecutive-sequence/


class Solution {
public:
    int longestConsecutive(vector<int>& arr) {
         unordered_map<int,int>umap;
      for(int i=0;i<arr.size();i++)
      {     if(umap.find(arr[i])==umap.end())
          {
            if(umap.find(arr[i]-1)!=umap.end() and umap.find(arr[i]+1)!=umap.end())
            {   int len1=umap[arr[i]-1];
                 int len2=umap[arr[i]+1];
                 int streak=len1+len2+1;
                 umap[arr[i]-len1]=streak;
                 umap[arr[i]+len2]=streak;
                 umap[arr[i]]=len1+1;
                
            }
            else if(umap.find(arr[i]-1)!=umap.end() and umap.find(arr[i]+1)==umap.end())
            {   int len=umap[arr[i]-1];
            umap[arr[i]-len]=len+1;
                 umap[arr[i]]=len+1;
              
            }
            else if(umap.find(arr[i]-1)==umap.end() and umap.find(arr[i]+1)!=umap.end())
            {    int len=umap[arr[i]+1];
                 umap[arr[i]+len]=len+1;
                 umap[arr[i]]=len+1;
                  
                
            }
            else
            {
                umap[arr[i]]=1;
            }
          }
         
          
      }
       int largest=0;
      for(auto it:umap)
      {
           largest=max(largest,it.second);
      }
      return largest;
        
    }
};
