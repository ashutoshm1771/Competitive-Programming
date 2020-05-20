// Author : Ashutosh Mishra

#include <bits/stdc++.h>

using namespace std;

int L[100005];
int n;
int sequence[100005];

int LIS(int sequence[], int n) {
    int i, j;
    for ( int i = 0; i < n; i++) {
        L[i] = 1;
    }
    for ( int i = 0; i < n; i++) {
        for ( int j = i + 1; j < n; j++) {
            if(sequence[j] > sequence[i]) {
                if(L[j] < L[i]+1) {
                    L[j] = L[i]+1;
                }
            }
        }
    }
    int maxlength = 0;
    for (int  i = 0; i < n; i++) {
        if(maxlength < L[i]) {
            maxlength = L[i];
        }
    }
    return maxlength;
}

void printLIS(int maxlength) {
    int pos;
      vector<int>LIS ;
    for ( int i= n-1; i >= 0; i--) {
        if(L[i] == maxlength) {
            pos = i;
            break;
        }
    }
    int val = L[pos];
    LIS.push_back(sequence[pos]);
    val--;
    
    for( int j = pos-1; j>=0; j--) {
        if(sequence[j] < sequence[pos] && L[j] == val) {
            LIS.push_back(sequence[j]);
            val--;
        }
    }
    for (auto x: LIS) {
        cout << x << " ";
    }

}
int main() {

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> sequence[i];
    }
    int ans = LIS(sequence, n);

    cout << "Length of the subsequence is\n" << ans;

    cout << "The elements of subsequence are\n";
    printLIS(ans);
    return 0;
}
