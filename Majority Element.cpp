Link for Ques:
https://www.interviewbit.com/problems/majority-element/


int Solution::majorityElement(const vector<int> &arr) {
    vector<int>A=arr;
    sort(A.begin(),A.end());

    return A[A.size()/2];
}
