Link for Ques:
https://practice.geeksforgeeks.org/problems/smaller-on-left20360700/1#


#include <bits/stdc++.h>
using namespace std;


vector<int> Smallestonleft(int arr[], int n);


int main() {
	
	int t;
	
	cin >> t;
	
	while(t--){
	    
	    int n;
	    cin >> n;
	    int arr[n+1];
	    
	    for(int i=0;i<n;i++){
	        cin>> arr[i];
	    }
	    
	    vector<int> b;
	    b = Smallestonleft(arr, n);
	    for(int i=0;i<n;i++)
	        cout << b[i] << " ";
	       
	    cout << endl;
	    
	    
	}
	
	return 0;
}// } Driver Code Ends

vector<int> Smallestonleft(int arr[], int n)
{  vector<int>v;
   v.push_back(-1);
   vector<long long int>dq;
   dq.push_back(arr[0]);
   
   for(int i=1;i<n;i++)
   {
       if(arr[i]>dq.back())
         {
               v.push_back(dq.back());
               dq.push_back(arr[i]);
         }
         else if(arr[i]<=dq.back())
         {   int s=0,e=dq.size()-1;
               int ele=arr[i];
               int mid,ans,pos=0;
               
               while(s<=e)
               {
                      mid=(s+e)/2;
                     if(dq[mid]>=ele)
                     {
                          e=mid-1;
                     }
                     else 
                     {   pos=mid;
                          ans=dq[mid];
                          s=mid+1;
                     }
               }
             if( dq[pos]>=ele)
             {
                  v.push_back(-1);
                 if(dq[pos]>ele)
                  dq.insert(dq.begin(),arr[i]);
             }
             else
             {
                  v.push_back(ans);
                  if(dq[pos+1]!=ele)
                  dq.insert(dq.begin()+pos+1,arr[i]);
             }
         
              
         }
       
   }
//   for(auto it:dq)
//   {
//       cout<<it<<" ";
//   }
//   cout<<endl;
   return v;
   
    
}
