Link for Ques:
https://www.interviewbit.com/problems/2-sum/


vector<int> Solution::twoSum(const vector<int> &v, int B) {

    map<int,int>umap;
    vector<int>res;
      for(int i=0;i<v.size();i++)
      {
            if(umap.find(B-v[i])!=umap.end())
             {   res.push_back(umap[B-v[i]]+1);
                 res.push_back(i+1);
                 return res;

             }
             else if(umap.find(v[i])==umap.end())
             {
                  umap[v[i]]=i;
             }
      }
      return res;






}
