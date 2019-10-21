/*algo : DP*/

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
const ll mod = 1000000007;
const int max_char = 256;

//this gives count of all possible distinct subsequences of string s
ll findans(string s) {
  vector<int> last(max_char,0);
  int n = s.length();
  ll dp[ n+1 ];
  dp[0] = 1;
  for (int i=1; i<=n; i++) {
    dp[i] = ( 2 * dp[i-1] ) % mod;
    if ( last[ s[ i-1 ] ] != 0) {
        dp[ i ] = (dp[ i ] - dp[ last[ s[ i-1 ] ] - 1 ] + mod ) % mod;
    }
    last[s[i-1]] = i;
  }
  return dp[n];
}

int main(){
    int t;
    cin >> t;
        string s;
    while(t--) {
        cin >> s;
        cout << findans(s) << "\n";
    }
    return 0;
}
