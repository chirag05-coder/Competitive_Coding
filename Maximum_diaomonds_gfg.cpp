Link For Question:
https://practice.geeksforgeeks.org/problems/chinky-and-diamonds3340/1/?category[]=Mathematical&category[]=Arrays&category[]=Strings&category[]=Hash&category[]=Mathematical&category[]=Arrays&category[]=Strings&category[]=Hash&problemStatus=unsolved&problemType=functional&page=1&sortBy=newest&query=category[]Mathematicalcategory[]Arrayscategory[]Stringscategory[]HashproblemStatusunsolvedproblemTypefunctionalpage1sortBynewestcategory[]Mathematicalcategory[]Arrayscategory[]Stringscategory[]Hash#


using namespace std;

 // } Driver Code Ends

class Solution {
  public:
    int maxDiamonds(int A[], int N, int K) {
        priority_queue<int>q;
        for(int i=0;i<N;i++)
        {
            q.push(A[i]);
        }
        int sum=0;
        while(K--)
        {    
            sum+=(q.top());
            q.push((q.top()/2));
            q.pop();
        }
        return sum;
        // code here
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N,K;
        
        cin>>N>>K;
        int A[N];
        
        for(int i=0; i<N; i++)
            cin>>A[i];

        Solution ob;
        cout << ob.maxDiamonds(A,N,K) << endl;
    }
    return 0;
}  // } Driver Code Ends
