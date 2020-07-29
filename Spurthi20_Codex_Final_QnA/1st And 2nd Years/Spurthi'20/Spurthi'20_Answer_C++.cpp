// Author : Ashutosh Mishra

#include <bits/stdc++.h>

#define forn(i, n) for (int i = 0; i < int(n); i++)

using namespace std;

int n;
vector<int> a, cnt;

int solvemin(){
    int res = 0;
    forn(i, n){
        if (!cnt[i]) continue;
        ++res;
        i += 2;
    }
    return res;
}

int solvemax(){
    int res = 0;
    int dist = 2;
    bool right = false;
    forn(i, n){
        if (!cnt[i]){
            ++dist;
            continue;
        }
        int j = i - 1;
        int sum = 0;
        while (j + 1 < n && cnt[j + 1]){
            ++j;
            sum += cnt[j];
        }
        res += (j - i + 1);
        if (sum > j - i + 1 && (!right || dist > 1)){
            --sum;
            ++res;
        }
        right = false;
        if (sum > j - i + 1){
            right = true;
            ++res;
        }
        i = j;
        dist = 0;
    }
    return res;
}

int main() {
    scanf("%d", &n);
    a.resize(n);
    cnt.resize(n + 1);
    forn(i, n){
        scanf("%d", &a[i]);
        ++cnt[a[i] - 1];
    }
    printf("%d %d\n", solvemin(), solvemax());
    return 0;
}
