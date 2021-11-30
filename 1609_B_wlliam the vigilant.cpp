Link for Ques:
https://codeforces.com/contest/1609/problem/B




#include<bits/stdc++.h>
#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long int
using namespace std;
const int M=1e9+7;
// lli power(lli a,lli b)
// {
//      if(b==0 )
//         return 1;
//       if(b==1)
//       return a;
     
//       if(!(b&1)) 
//       return (power(a,b/2)%M)*(power(a,b/2)%M);
//       else
//       return ((a)*(power(a,b/2)%M)%M)*(power(a,b/2)%M);

// }

// lli  gcd(lli u, lli v)
// {
//   lli shift;
//   if (u == 0) return v;
//   if (v == 0) return u;
//   shift = __builtin_ctz(u | v);
//   u >>= __builtin_ctz(u);
//   do {
//       v >>= __builtin_ctz(v);
//       if (u > v) {
//          lli t = v;
//           v = u;
//           u = t;
//       }  
//       v = v - u;
//   } while (v != 0);
//   return u << shift;
// }
// lli highestPowerof2(lli n)
// {
//   lli p = (int)log2(n);
//   // return (int)pow(2, p);   power
  
//      return p;  //number
// }
// bool is_prime(int num)
// {      if(num==1)
//       return false;
//       if(num==2 || num==3)
// 	      return true;
// 		if(num%2==0 || num%3==0)
// 		     return false;
// 	 for(int i=5;i*i<=num;i=i+6)
// 	   {      if(num%i==0 || num%(i+2)==0)
// 	              return false;
// 		   }
// 		return true;       
// }
// bool isPerfectSquare(long double x)
// {
//     // Find floating point value of
//     // square root of x.
//     if (x >= 0) {
 
//         long long sr = sqrt(x);
         
//         // if product of square root
//         //is equal, then
//         // return T/F
//         return (sr * sr == x);
//     }
//     // else return false if n<0
//     return false;
// }
void solve() {
	int n, q;
	cin >> n >> q;
	string str;
	cin >> str;
	unordered_set<int>ust;

	for (int i = 0; i < str.size(); i++)
	{
		char ch = str.at(i);
		if (ch == 'a' and i + 2 < n) {
			if (str.at(i + 1) == 'b' and str.at(i + 2) == 'c')
				ust.insert(i);
		}
	}

	while (q--) {
		int pos;
		char ch;

		cin >> pos >> ch;
		pos -= 1;

		if (ust.find(pos) != ust.end())
			ust.erase(pos);
		if (ust.find(pos - 1) != ust.end())
			ust.erase(pos - 1);
		if (ust.find(pos - 2) != ust.end())
			ust.erase(pos - 2);
		str.at(pos) = ch;
		if (ch == 'a')
		{
			if (pos + 2 < n and str.at(pos + 1) == 'b' and str.at(pos + 2) == 'c')
			{
				ust.insert(pos);
			}

		}
		else if (ch == 'b')
		{

			if (pos - 1 >= 0 and pos + 1 < n and str.at(pos - 1) == 'a' and str.at(pos + 1) == 'c')
			{
				ust.insert(pos - 1);

			}

		}
		else if (ch == 'c')
		{
			if (pos - 2 >= 0 and str.at(pos - 1) == 'b' and str.at(pos - 2) == 'a')
			{
				ust.insert(pos - 2);
			}

		}


		cout << ust.size() << "\n";

	}


}
signed main() {
    
     solve();
   
}




     
