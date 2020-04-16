// Author : Ashutosh Mishra

#include <bits/stdc++.h>

using namespace std;
int main(){
int n, k;
    cin >> n >> k;
    vector<int> counts(k+1, 0);
    for (int i = 0; i < n; ++i) {
        int num; cin >> num;
        counts[num % k] += 1;
    }
    int total = min(counts[0], 1);
    int upto = k/2;
    if (upto * 2 == k) upto -= 1;
    for (int i = 1; i <= upto; ++i) total += max(counts[i], counts[k-i]);
    if (k % 2 == 0) total += counts[k/2] > 0;
    cout << total << endl;
    return 0;
}
