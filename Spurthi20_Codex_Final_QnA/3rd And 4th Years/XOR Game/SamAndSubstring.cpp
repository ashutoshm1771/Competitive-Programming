#include <bits/stdc++.h>
#define MOD 1000000007
typedef long long ll;
using namespace std;
void getAns(string s) {
   
    long long int res = 0;
    long long int f = 1;
    for(int i = s.size()-1; i >= 0; i--) {
        res = (res + (s[i]-'0')*f*(i+1)) % MOD;
        f = (f*10+1) % MOD;
    }
    cout << res%MOD;
}
int main() {
    string s;
    cin >> s;
    getAns(s);
    return 0;
}
