#include <bits/stdc++.h>

using namespace std;

int eggDrop(int n, int k) { // n eggs and k floors
 	int dp[n+1][k+1];
	for ( int i = 1; i <= n; i++) {
		dp[i][1] = 1;
		dp[i][0] = 0;
	}
	for ( int i = 1; i <= k; i++) {
		dp[1][i] = i;
	}
	for ( int i = 2; i <= n; i++) {
		for( int j = 2; j <= k; j++) {
			 dp[i][j] = INT_MAX;
			for ( int x = 1; x <= j; x++) {
				int res = 1 + max(dp[i-1][x-1], dp[i][j-x]);
				dp[i][j] = min(res,dp[i][j]);
			}
		}
	}
	return dp[n][k];

}
int main() {
	 #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
	int n, k;
	cin >> n >> k;
	cout << eggDrop(n, k);
	return 0;
}
