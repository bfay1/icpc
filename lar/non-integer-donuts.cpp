#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int n;
	cin >> n;
	double b, d;
	string s;
	cin >> s;
	int sl = s.length() ;
	int t = s[sl - 2];
	int o = s[sl - 1];
	b += (s[sl - 2] - 48)*10 + (s[sl - 1] - 48);
	int l = 0;
	while (n--) {
		cin >> s;
		sl = s.length();
		t = s[sl - 2];
		o = s[sl - 1];
		b = ((int)(b + (t - 48)*10 + (o - 48)) % 100);
		if (b) l++;
	}
	cout << l;
}
