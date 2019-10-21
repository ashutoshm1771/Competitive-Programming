#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    int dp[151];
    dp[0] = 2;
    int i2 = 0, i3 = 0, i5 = 0;
    int a = 2, b=3, c=5;
    for(int i=1; i<=n; i++) {
        int next_ugly = min(a,min(b,c));
        dp[i] = next_ugly;
        if(next_ugly == a) {
            i2++;
            a = 2*dp[i2];
        }
        if(next_ugly == b) {
            i3++;
            b = 3*dp[i3];
        }
        if(next_ugly == c) {
            i5++;
            c = 5*dp[i5];
        }
    }
    cout << dp[n-1];
}
