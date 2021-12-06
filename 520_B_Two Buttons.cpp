Link for Ques:
https://codeforces.com/contest/520/problem/B




#include<bits/stdc++.h>
using namespace std;

// #define ll long long int
#define int long long int
#define pb push_back
#define xxx exit(0)
#define ain(arr) for (auto &it : arr) cin >> it;
#define op(container) for(auto it: container)  cout<<it<<" ";
#define clr  cin.ignore(numeric_limits<streamsize>::max(), '\n')
#define sortv(arr) sort(arr.begin(),arr.end())
#define sorta(arr,n) sort(arr,arr+n)
#define helper(arr) arr.begin(),arr.end()
#define bug(...)       __f (#__VA_ARGS__, __VA_ARGS__)

const int inf = 1e9 + 7;


template <typename Arg1>
void __f (const char* name, Arg1&& arg1) { cout << name << " : " << arg1 << endl; }
template <typename Arg1, typename... Args>
void __f (const char* names, Arg1&& arg1, Args&&... args)
{
	const char* comma = strchr (names + 1, ',');
	cout.write (names, comma - names) << " : " << arg1 << " | "; __f (comma + 1, args...);
}



void solve() {
	int n, m;
	cin >> n >> m;


	if (n > m) {
		cout << n - m << "\n";
		return ;
	}
	std::vector<bool> visited(1000000, false);

	queue < pair<int, int>>q;

	q.push({n, 0});

	while (!q.empty()) {


		int x = q.front().first;
		int y = q.front().second;
		q.pop();
		if (x > 0) {
			if (visited[x] == false) {
				q.push({x - 1, y + 1});
				visited[x] = true;
			}

			if (x <=  m)
				q.push({x * 2, y + 1});
		}
		if (x == m) {
			cout << y << "\n";
			return;
		}
	}

	// }
	// queue <int>q;

	// q.push({n, 0});

	// while (!q.empty()) {
	// 	int x = q.front().first;
	// 	int y = q.front().second;

	// 	q.pop();
	// 	if (x > 0) {
	// 		q.push({x - 1, y + 1});
	// 		q.push({x * 2, y + 1});
	// 	}
	// 	if (x == m) {
	// 		cout << y << "\n";
	// 		return;
	// 	}

	// }

}


signed main(int argc, char const * argv[])
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
