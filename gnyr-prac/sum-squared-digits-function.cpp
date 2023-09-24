#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int k, b, n; cin >> k >> b >> n;
    int ans = 0;
    while (n) {
        ans += (n % b) * (n % b);
        n /= b;
    }
    cout << k << " " << ans << "\n";

}

signed main()
{
    cin.tie(nullptr)->sync_with_stdio(false);
    int t; cin >> t;
    while (t--) solve();
}