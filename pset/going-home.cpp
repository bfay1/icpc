
#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int n;
	cin >> n;
	vector<int> a(n);
	int m = 0;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		m = max(a[i], m);
	}
	m = 2*m + 1;
	vector<vector<pair<int, int>>> freq(m);
	for (int x = 0; x < n; x++) {
		for (int y = x + 1; y < n; y++) {
			int s = a[x] + a[y];
			if (freq[s].size() == 0) {
				freq[s].push_back({x, y});
			}
			else {
				for (auto p : freq[s]) {
					int z = p.first;
					int w = p.second;
					if (x != z && x != w && y != z && y != w) {
						cout << "YES\n";
						cout << x + 1 << " " << y + 1;
						cout << " " << z + 1 << " " << w + 1;
						return 0;
					}
				}
			}
		}
	}
	cout << "NO";
}
