#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int k, n; cin >> k >> n;
    cout << k << " " << n*(n + 1)/2 + n << "\n";
}

signed main()
{
    cin.tie(nullptr)->sync_with_stdio(false);
    int t; cin >> t;
    while (t--) solve();
}