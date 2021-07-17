Link for Ques:
https://www.interviewbit.com/problems/pairs-with-given-xor/



int Solution::solve(vector<int> &A, int B) {
    set<int>ust;
    for(auto it:A)
    {
        ust.insert(it);
    }
    int cnt=0;
    for(auto it:A)
    {
        if(ust.find(it^B)!=ust.end())
        cnt++;
    }
    return cnt/2;
}
