#include <bits/stdc++.h>
using namespace std;



 // } Driver Code Ends
class Solution
{
    public:
      priority_queue<double> left;
      priority_queue<double,vector<double>, greater<double>>right;
      double med=0.0;
      double d=0;
    void insertHeap(int &x)
    {
//left.push(x);
        d=(double)x;
        balanceHeaps();

    }

    //Function to balance heaps.
    void balanceHeaps()
    {
        if(left.size()>right.size())
        {
            if(d<med)
            {
                right.push(left.top());
                left.pop();
                left.push(d);
            }
            else
            right.push(d);
         med=((double)left.top()+(double)right.top())/(2.0);
        }
        else if(left.size()==right.size())
        {
            if(d<med)
            {
                left.push(d);
                med=left.top();
            }
            else
            {
                right.push(d);
                med=right.top();
            }
        }
        else
        {
             if(d>med)
            {
                left.push(right.top());
                right.pop();
                right.push(d);
            }
            else
            left.push(d);
         med=((double)left.top()+(double)right.top())/(2.0);
        }
    }

    //Function to return Median.
    double getMedian()
    {
        return med;
    }
};


// { Driver Code Starts.

int main()
{
    int n, x;
    int t;
    cin>>t;
    while(t--)
    {
    	Solution ob;
    	cin >> n;
    	for(int i = 1;i<= n; ++i)
    	{
    		cin >> x;
    		ob.insertHeap(x);
    	    cout << floor(ob.getMedian()) << endl;
    	}
    }
	return 0;
}  // } Driver Code Ends
