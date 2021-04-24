Link for Ques:
https://practice.geeksforgeeks.org/problems/largest-subarray-with-0-sum/1/?problemStatus=unsolved&problemType=functional&page=1&sortBy=submissions&category[]=Arrays&category[]=Strings&category[]=Hash&category[]=sliding-window&query=problemStatusunsolvedproblemTypefunctionalpage1sortBysubmissionscategory[]Arrayscategory[]Stringscategory[]Hashcategory[]sliding-window#


#include <bits/stdc++.h>
using namespace std;

int maxLen(int A[], int n);

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int N;
        cin >> N;
        int A[N];
        for (int i = 0; i < N; i++)
            cin >> A[i];
        cout << maxLen(A, N) << endl;
    }
}
// } Driver Code Ends


/*You are required to complete this function*/

int maxLen(int arr[], int n)
{
    // Your code here
    for(int i=1;i<n;i++)
   {
     arr[i]=arr[i]+arr[i-1];

   }

 unordered_map<int,int>umap;
 int max_len=0;
 for(int i=0;i<n;i++)
 {
   if(arr[i]==0)
   {
     max_len=max(max_len,i+1);
   }
   if(umap.count(arr[i]))
   {

       max_len=max(max_len,i-umap[arr[i]]);
   }
   else
     umap[arr[i]]=i;
 }
 return max_len;
}
