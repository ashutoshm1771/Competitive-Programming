// Author : Ashutosh Mishra

#include <bits/stdc++.h>
using namespace std;
#define L (s.size() + t.size())

int main(){
    string s, t;
    int k, i;
    cin >> s >> t >> k;
    for(i = 0; s[i] == t[i]; i++);
    cout << (L <= k + i*2 && L%2 == k%2 || L < k ? "Yes" : "No");
    return 0;
}
