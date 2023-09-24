#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
	cin.tie(nullptr)->sync_with_stdio(false);
	int n, m; cin >> n >> m;
	vector<int> a(n);
	for (int i = 0; i < n; i++)
		cin >> a[i];
	for (int i = 0; i < n - 1; i++)
		a[i + 1] = max(a[i + 1], a[i] - m);
	for (int i = n - 1; i > 0; i--)
		a[i - 1] = max(a[i - 1], a[i] - m);
	for (int i = 0; i < n; i++)
		cout << a[i] << " \n"[i == n - 1];
}
