/* Given an array of integers and a number K. Find the count of distinct elements in every window of size K in the array.

Example 1:

Input:
N = 7, K = 4
A[] = {1,2,1,3,4,2,3}
Output: 3 4 4 3
Explanation: Window 1 of size k = 4 is
1 2 1 3. Number of distinct elements in
this window are 3.
Window 2 of size k = 4 is 2 1 3 4. Number
of distinct elements in this window are 4.
Window 3 of size k = 4 is 1 3 4 2. Number
of distinct elements in this window are 4.
Window 4 of size k = 4 is 3 4 2 3. Number
of distinct elements in this window are 3.
Example 2:

Input:
N = 3, K = 2
A[] = {4,1,1}
Output: 2 1   */

#include<bits/stdc++.h>
using namespace std;
vector <int> countDistinct (int arr[], int n, int k)
   {
         vector<int>v;
         unordered_map<int,int>st;
        int i=0;int j=0;
        while(j<n)
        {
             st[arr[j]]++;
             if(j-i+1==k)
             {
                 
                 v.push_back(st.size());
                 if(st[arr[i]]==1)
                  st.erase(arr[i]);
                  else
                   st[arr[i]]--;
                 i++;
                 j++;
             }
            else if(j-i+1<k)
            {
                j++;
            }
        }
        return v;
   }
int main()
{
 ios_base::sync_with_stdio(0);
 cin.tie(0);cout.tie(0);
 int n;
 cin>>n;
 int arr[n]{0};
 for(int i=0;i<n;i++)
 {
   cin>>arr[i];
 }
 int k;
 cin>>k;
 vector<int> v1=countDistinct(arr,n,k);
 for(auto it: v1)
   cout<<it<<" ";
}
