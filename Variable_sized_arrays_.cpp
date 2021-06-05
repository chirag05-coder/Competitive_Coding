Link for Ques:
https://www.hackerrank.com/challenges/variable-sized-arrays/problem

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    
    int n,q;
    cin>>n>>q;
    vector<vector<int>>v(n);
    int i=0;
    while(n--)
    {  int m;
        cin>>m;
        vector<int>temp;
        while(m--)
        {
             int x;
             cin>>x;
            // temp.push_back(x);
             v[i].push_back(x);
        }
        i++;
       
        
    }
    while(q--)
    {
         int i,j;
         cin>>i>>j;
         cout<<v[i][j]<<endl;
    }
    return 0;
}
