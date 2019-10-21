/*
  author     : Ayush Gupta
  Created on : [2018-08-15 00:35]	
 
 */

#include <bits/stdc++.h>

using namespace std;

#define endl "\n"
#define rep(i, a, b)             for(int i = a; i < b; i++)
#define REP(i, a, b)             for(int i = a; i <= b; i++)
#define sc(n)                    scanf("%d",&n)
#define pb                       push_back
#define fi                       first
#define se                       second
#define mp                       make_pair
#define all(v)                   (v).begin(),(v).end()
#define rall(v)                  (v).rbegin(),(v),rend()
#define MAX 100005


typedef long long int ll;
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef double ld;

int getMinSquares(int n) {
	int dp[n+1];
	dp[0]=0;
	dp[1]=1;
	dp[2]=2;
	dp[3]=3;
	for ( int i = 4; i<=n; i++) {
		dp[i] = i;
		for ( int j = 1; j <= i; j++) {
			int temp = j*j;
			if(i-temp < 0)
				break;
			else
				dp[i] = min(dp[i], 1+dp[i-temp]);
		}
	}
	int res = dp[n];
	return res;

}


int main()  {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    int n;
    cin >> n;
    int ans = getMinSquares(n);
    cout << ans;

    return 0;
}
