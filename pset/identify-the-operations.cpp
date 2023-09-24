#include <bits/stdc++.h>
using namespace std;
const int mod = 998244353, nmax = 200000;
int a[nmax], l[nmax], r[nmax], ind[nmax], b[nmax], q[nmax];
bool inc[nmax] = {};
int n, k;
 
int main() {
	int t;
	cin >> t;
	while (t--) {
		int n, k, temp;
		cin >> n >> k;
		for (int i = 0; i < n; i++) {
			cin >> a[i];
			ind[a[i]] = i;
			l[i] = i - 1;
			r[i] = i + 1;
		}
		for (int i = 0; i < k; i++) {
			cin >> b[i];
			q[i] = ind[b[i]];
			inc[q[i]] = true;
		}
		long long ans = 1;
		for (int z = 0; z < k; z++) {
			int i = q[z];
			int ln = l[i];
			int rn = r[i];
			inc[i] = 0;
			int c = 0;
			if (ln >= 0) c += !inc[ln];
			if (rn < n) c += !inc[rn];
			ans = (ans * c) % mod;
			if (ln >= 0) r[ln] = rn;
			if (rn < n) l[rn] = ln;
		}
		cout << ans << '\n';
	}
}
