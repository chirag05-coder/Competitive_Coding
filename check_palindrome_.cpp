Link for Ques:
https://www.interviewbit.com/problems/check-palindrome/


int Solution::solve(string A) {
    unordered_map<char,int>ump;
    for(auto it:A)
    {
        ump[it]++;
    }
    int n=A.length();
    int cnt_1=0;
    for(auto it:ump)
    {
        if(it.second&1)
        cnt_1++;
    }
    if(n&1 and cnt_1==1)
    return 1;
    else if(!(n&1) and cnt_1==0)
    return 1;
    else
    return 0;
    
}
