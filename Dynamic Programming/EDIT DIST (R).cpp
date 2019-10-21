/* Created on : 19/07/2018 ,08:40:15
   Tested By  : Ayush Gupta
   References : Cormen, G4G
   Problem Statement : Given two strings convert source(a) string to target(b) string using minimum number of operations!
                       Operations allowed : INSERT, DELETE, REPLACE
*/
#include <bits/stdc++.h>

using namespace std;

int ans(string a, string b, int m, int n) {
    int dp[m+1][n+1];
    for ( int i = 0; i <= m; i++) {
        for ( int j = 0; j <= n; j++) {
            if( i == 0)
                dp[i][j] = j;
            else if ( j == 0 )
                dp[i][j] = i;
            else if(a[i-1] == b[j-1])
                dp[i][j] = dp[i-1][j-1];
            else
                dp[i][j] = 1 + min(dp[i-1][j-1], min(dp[i-1][j], dp[i][j-1]));
        }
    }
    return dp[m][n];
}
int main() {
    string a, b;
    cin >> a >> b;
    int m = a.length();
    int n = b.length();
    cout << ans(a, b, m, n);
    return 0;
}
