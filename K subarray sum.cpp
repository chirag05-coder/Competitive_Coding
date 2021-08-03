Link for Ques:
https://practice.geeksforgeeks.org/problems/k-subarray-sum/0/?page=2&query=page2#


using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    int n,k,m;
	    cin>>n>>k>>m;
	    int arr[n]{0};
	    for(int i=0;i<n;i++)
 	      cin>>arr[i];
	     priority_queue<int>pq;
	     int i=0,j=0;
	     int sum=0;
	     while(j<n)
	     { sum+=arr[j];
	        if(j-i+1==k)
	        {
	            pq.push(sum);
	            sum-=arr[i];
	            i++;
	            j++;
	        }
	        else
	        j++;
	         
	     }
	     while(m--)
	     {
	         cout<<pq.top()<<" ";
	         pq.pop();
	     }
	     cout<<endl;
	}
	return 0;
}
