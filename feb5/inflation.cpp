#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
	int n; cin >> n;
	vector<long double> a(n);
	for (int i = 0; i < n; i++) cin >> a[i];
	sort(a.begin(), a.end());
	long double ans = (long double) INT_MAX;
	cout << setprecision(6);
	for (int i = n; i > 0; i--) {
		if (a[i - 1] > i) {
			cout << -1 << "\n";
			return 0;
		} else {
			ans = min(ans, (long double) (a[i - 1] / (long double) i));
		}
	}
	cout << ans << "\n";
	return 0;
}
