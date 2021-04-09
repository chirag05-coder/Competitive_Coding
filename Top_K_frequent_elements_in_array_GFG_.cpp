Link FOr QUes:
https://practice.geeksforgeeks.org/problems/top-k-frequent-elements-in-array/1#


 // } Driver Code Ends
class Solution {
  public:
    vector<int> topK(vector<int>& v,int k) {
        // Code here
      
      map<int,int>umap;
      multimap<int,int>mm;
      for(int i=0;i<v.size();i++)
      {
             umap[v[i]]++;
      }
      v.clear();
     vector<int>v1;
     
     for(auto it:umap)
     {
         mm.insert({it.second,it.first});
     }
      for(auto it:mm)
      {
         v1.push_back(it.second); 
      }
      int i=v1.size()-1;
       while(k--)
       {  
            v.push_back(v1[i]);
            
          i--;
           
       }
       return v;
        
        
        
    }
};


// { Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n;
        cin >> n;
        vector<int> nums(n);
        for (auto &i : nums) cin >> i;
        int k;
        cin >> k;
        Solution obj;
        vector<int> ans = obj.topK(nums, k);
        for (auto i : ans) cout << i << " ";
        cout << "\n";
    }
    return 0;
}  // } Driver Code Ends
