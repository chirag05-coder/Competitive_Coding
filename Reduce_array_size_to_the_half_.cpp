Link for Ques:
https://leetcode.com/problems/reduce-array-size-to-the-half/


class Solution {
public:
    int minSetSize(vector<int>& arr) {
        unordered_map<int,int>umap;
        for(auto it:arr)
        {
           umap[it]++;    
        }
        
        
        // for(auto it:umap)
        // {
        //     cout<<it.first<<" "<<it.second<<endl;
        // }
        //cout<<endl;
        int size=arr.size();
        int size1=arr.size()/2;
        int cnt=0;
        priority_queue<int>pq;
        for(auto it:umap)
        {
             pq.push(it.second);
        }
        while(size>size1)
        {
             int ele,maxii=0;
         
            size-=pq.top();
          
            cnt++;
            pq.pop();
        }
        return cnt;
        
        
    }
};
