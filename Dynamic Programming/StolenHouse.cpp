//Problem Statement : https://www.geeksforgeeks.org/maximum-sum-such-that-no-two-elements-are-adjacent/
#include <bits/stdc++.h>

using namespace std;

void stolenhouse(int arr[], int n) {
    if (n == 1) {
        cout << arr[0];
    }
    if (n == 2) {
        cout << max(arr[0], arr[1]);
    }
    int dp[n];
    dp[0] = arr[0];
    dp[1] = max(arr[0], arr[1]);
    for (int i = 2; i < n; i++) {
        dp[i] = max(dp[i-2]+arr[i], dp[i-1]);
    }
    cout << "The maximum value from stolen house is " << dp[n-1];
}
int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    stolenhouse(arr, n);
    return 0;
}
