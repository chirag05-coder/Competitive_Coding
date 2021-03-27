// Some people are standing in a queue. A selection process follows a rule where people standing on even positions are selected. Of the selected people a queue is formed and again out of these only people on even position are selected. This continues until we are left with one person. Find out the position of that person in the original queue.

// Input:
// The first line of input contains an integer T denoting the number of test cases.The first line of each test case is N,number of people standing in a queue.

// Output:
// Print the position(original queue) of that person who is left.

// Constraints:
// 1 <= T <= 103
// 1 <= N <= 108

// Example:
// Input:
// 2
// 5
// 9
// Output:
// 4
// 8

#include <bits/stdc++.h>
using namespace std;
long long int print(queue<long long int>&q,queue<long long int>&temp,long long int i,long long int n)
{

          if(q.size()==1 )
           return q.front();
        
        
       for(int j=i;j<=n;j++)
      
        {
          if(j&1)
          {  q.pop();
            
              
          }
          else
          {
          int x=q.front();
           temp.push(x);
            q.pop();
        
              
          }
        }
        
    
        n=temp.size();
        q.swap(temp);
        print(q,temp,1,n);
    
        
           
     
 }
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        long long int n;
        cin>>n;
        queue<long long int>q;
        for(int i=1;i<=n;i++)
           q.push(i);
            queue<long long int>temp;
           cout<<print(q,temp,1,n)<<endl;
           
    }

	return 0;
}
