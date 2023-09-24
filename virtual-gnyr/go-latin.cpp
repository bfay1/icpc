/*
 * =====================================================================================
 *
 *       Filename:  task.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  02/11/2023 03:01:23 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
	cin.tie(nullptr)->sync_with_stdio(false);
	int n; cin >> n;
	
	unordered_map<char, string> mp = { {'a', "as"}, {'i', "ios"}, {'y', "ios"}, {'l', "les"}, {'n', "anes"}, {'o', "os"}, {'r', "res"}, {'t', "tas"}, {'u', "us"}, {'v', "ves"}, {'w', "was"}};

	while (n--) {
		string s; cin >> s;
		if (s[s.size() - 2] == 'n' && s.back() == 'e') {
			s.pop_back();
			s.pop_back();
			cout << s << "anes";
		} else if (mp.find(s.back()) != mp.end()) {
			char c = s.back();
			s.pop_back();
			cout << s << mp[c];
		} else {
			cout << s << "us";
		}
		cout << "\n";
	}
	return 0;
}

