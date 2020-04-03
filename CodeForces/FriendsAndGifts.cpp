#include <bits/stdc++.h>

using namespace std;

int main() {
#ifdef _DEBUG
	freopen("input.txt", "r", stdin);
//	freopen("output.txt", "w", stdout);
#endif
	
	int n;
	cin >> n;
	vector<int> f(n);
	vector<int> in(n), out(n);
	for (int i = 0; i < n; ++i) {
		cin >> f[i];
		--f[i];
		if (f[i] != -1) {
			++out[i];
			++in[f[i]];
		}
	}
	
	vector<int> loops;
	for (int i = 0; i < n; ++i) {
		if (in[i] == 0 && out[i] == 0) {
			loops.push_back(i);
		}
	}
	if (loops.size() == 1) {
		int idx = loops[0];
		for (int i = 0; i < n; ++i) {
			if (in[i] == 0 && i != idx) {
				f[idx] = i;
				++out[idx];
				++in[i];
				break;
			}
		}
	} else if (loops.size() > 1) {
		for (int i = 0; i < int(loops.size()); ++i) {
			int cur = loops[i];
			int nxt = loops[(i + 1) % int(loops.size())];
			f[cur] = nxt;
			++out[cur];
			++in[nxt];
		}
	}
	loops.clear();
	vector<int> ins, outs;
	for (int i = 0; i < n; ++i) {
		if (in[i] == 0) ins.push_back(i);
		if (out[i] == 0) outs.push_back(i);
	}
	assert(ins.size() == outs.size());
	for (int i = 0; i < int(outs.size()); ++i) {
		f[outs[i]] = ins[i];
	}
	
	for (int i = 0; i < n; ++i) {
		cout << f[i] + 1 << " ";
	}
	cout << endl;
	
	return 0;
}