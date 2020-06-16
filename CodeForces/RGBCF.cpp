#include <bits/stdc++.h>

using namespace std;

int main() {
#ifdef _DEBUG
	freopen("input.txt", "r", stdin);
//	freopen("output.txt", "w", stdout);
#endif
	
	const string t = "RGB";

	int q;
	cin >> q;
	for (int i = 0; i < q; ++i) {
		int n, k;
		string s;
		cin >> n >> k >> s;
		int ans = 1e9;
		for (int j = 0; j < n - k + 1; ++j) {
			for (int offset = 0; offset < 3; ++offset) {
				int cur = 0;
				for (int pos = 0; pos < k; ++pos) {
					if (s[j + pos] != t[(pos + offset) % 3]) {
						++cur;
					}
				}
				ans = min(ans, cur);
			}
		}
		cout << ans << endl;
	}
	
	return 0;
}