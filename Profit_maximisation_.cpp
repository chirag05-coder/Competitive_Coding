Link for Ques:
https://www.interviewbit.com/problems/profit-maximisation/


int Solution::solve(vector<int> &A, int B) {
    priority_queue<int>pq;
     
     for(int i=0;i<A.size();i++)
     {
           pq.push(A[i]);
     }
     int sum=0;
     while(B--)
     {

        sum+=pq.top();
        int x=pq.top();
        pq.pop();
        pq.push(--x);
     }
     return sum;


}
