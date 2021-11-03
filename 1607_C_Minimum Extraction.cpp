Link for Ques:
https://codeforces.com/problemset/problem/1607/C


#include <iostream>
#include <vector>
#include<algorithm>

using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
       long long n;
        cin >> n;
        vector<long long> v;
        long long x;
        for(int i=0;i<n;i++)
        {
            cin>>x;
            v.push_back(x);
        }
        if (n==1)
        {
            cout<<v[0]<<"\n";
           
        }
        else
        {
            sort(v.begin(),v.end());
            long long ans =v[0];
            for (int i = 1; i <v.size(); i++)
            {
                ans = max(ans, v[i] - v[i - 1]);
            }
            cout << ans << endl;
        }
    }
}
