Link for Ques:
https://www.interviewbit.com/problems/colorful-number/


int Solution::colorful(int A) {

    unordered_map<int,int>umap;
    vector<int>v;
    while(A>0)
    {
        v.push_back(A%10);
        umap[A%10]++;
        A/=10;
    }
    reverse(v.begin(),v.end());
    for(int i=0;i<v.size();i++)
    {     int val=v[i];
         for(int j=i+1;j<v.size();j++)
         {      val*=v[j];
                 if(umap.find(val)!=umap.end())
                 {
                     return 0;
                 }
                 else
                 umap[val]++;
         }
    }
    for(auto it:umap)
    {
        if(it.second>1)
        return 0;
    }
    return 1;


}
