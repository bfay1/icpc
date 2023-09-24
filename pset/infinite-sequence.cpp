#include <bits/stdc++.h>
using namespace std;
 
int main() {
	long long n;
	cin >> n;
	int i = 0;
	while (n > ++i) n -= i;
	cout << n;
	return 0;
}
