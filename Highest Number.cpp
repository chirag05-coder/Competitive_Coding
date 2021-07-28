Link for Ques:
https://www.interviewbit.com/problems/highest-product/



int Solution::maxp3(vector<int> &A) {
      priority_queue<int>pq;
    for(auto it:A)
    pq.push(it);
    int k=3;
    int pro=1;
     int an_pro=1;
    int  top=pq.top();
    
    while(!pq.empty() )
    {
        if(k<=3 and k>0)
        {
        pro*=pq.top(); 
        }
        if( pq.size()<3)
        {
             an_pro*=pq.top();
        }
            pq.pop();
            k--;
    }

    return max(pro,an_pro*top);
}
