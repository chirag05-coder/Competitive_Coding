Link for Ques:
https://www.interviewbit.com/problems/interview-questions/


int Solution::bulbs(vector<int> &A) {
     if(A.empty())
    return 0;
    auto it=A.begin();
    int flag=0;
    for(;it<A.end();it++)
    {
        if(*it==0)
        {
            flag++;
        break;
        }
    }
    if(!flag)
    return 0;
    auto ip=unique(it,A.end());
     return distance(it,ip);
}
