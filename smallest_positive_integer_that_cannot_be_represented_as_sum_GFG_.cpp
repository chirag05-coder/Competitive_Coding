Link For Ques:
https://practice.geeksforgeeks.org/problems/b6b608d4eb1c45f2b5cace77c4914f302ff0f80d/1/#:~:text=Input%3A%20N%20%3D%203%20array%5B%5D,of%20elements%20from%20the%20array.

//Initial Template for C++

#include<bits/stdc++.h> 
using namespace std; 


 // } Driver Code Ends
//User function Template for C++

class Solution
{   
public:
    long long smallestpositive(vector<long long> arr, int n)
    { 
        // code here 
        
sort(arr.begin(),arr.end());
       if(arr[0]!=1)
       return 1;
       if(arr[1]!=2 and arr[1]!=1)
       return 2;
       
       long long sum=1;
       for(int i=0;i<n;i++)
       {
           if(arr[i]<=sum)
           {
               sum+=arr[i];
           }
       }
       return sum;
    } 
};


// { Driver Code Starts.

int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<long long> array(n);
        for (int i = 0; i < n; ++i)
        {
            cin>>array[i];
        }
        Solution ob;
        cout<<ob.smallestpositive(array,n)<<"\n";
    }
    return 0; 
} 
  // } Driver Code Ends
