Link for QUes:
https://codeforces.com/contest/628/problem/A


#include<bits/stdc++.h>
using namespace std;

// #define ll long long int
#define int long long int






void solve() {
	int n, b, p;
	cin >> n >> b >> p;

	b = (b * 1LL * 2) + 1;
	cout << (n - 1) * 1LL * b << " " << (n * 1LL * p) << "\n";

}


signed main(int argc, char const *argv[])
{
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	clock_t z = clock();

	int t = 1;
	// cin >> t;

	while (t--) solve();

	cerr << "Run Time : " << ((double)(clock() - z) / CLOCKS_PER_SEC) << "\n";

	return 0;

}
