#include <bits/stdc++.h>
using namespace std;
/*
	The main idea for this problem is that the optimum value
	at each vertex is one of the endpoints of the range.
	Our goal should be to make the value at each vertex as 
	far away from its neighbors as possible. Since each vertex's 
	state is dependent on its neighbors, we need to use dp to 
	find the optimum choice of left or right endpoint at each 
	vertex.
*/
 
const int N  = 200001;
vector<int> adj[N];
long long dp[2][N];
int A[2][N], n;
 
 
/*
	Using depth-first search we calculate the max beauty of each subtree.
	We do so using the children of each vertex, generating a value
	of the maximum beauty if we select the upper end of the range
	or the lower end of the range.
*/
 
void dfs(int v, int p = -1) {
	dp[0][v] = dp[1][v] = 0;
	for (int u : adj[v]) {
		if (u == p) continue;
		dfs(u, v);
		dp[0][v] += max(abs(A[0][v] - A[1][u]) + dp[1][u], dp[0][u] + abs(A[0][v] - A[0][u]));
		dp[1][v] += max(abs(A[1][v] - A[1][u]) + dp[1][u], dp[0][u] + abs(A[1][v] - A[0][u]));
	}
}
 
 
void solve() {
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		scanf("%d%d", &A[0][i], &A[1][i]);
	}
	
	fill(adj + 1, adj + n + 1, vector<int>());
	for (int i = 0; i < n - 1; i++) {
		int u, v;
		scanf("%d%d", &u, &v);
		adj[u].push_back(v);
		adj[v].push_back(u);
	}
	
	dfs(1);
	printf("%lld\n", max(dp[0][1], dp[1][1]));
}
 
int main() {
	int t;
	scanf("%d", &t);
	while (t--) solve();
	return 0;
}
