// Author : Ashutosh Mishra

/*Recursive Version*/

#include <bits/stdc++.h>

using namespace std;


int eggDrop (int n, int k) { // n eggs and k floors
	int res = INT_MAX;
	if( n == 1) {
		return k;
	}
	if( k == 1 || k == 0) {
		return k;
	}
	for ( int x = 1; x <= k; x++) {
		res = min(res, max(eggDrop(n-1,x-1), eggDrop(n, k-x)));
	}
	return res + 1;

}

int main() {
	int n, k;
	cin >> n >> k;
	cout << eggDrop(n, k);
	return 0;
}
