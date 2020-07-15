/*

  author      : (Ashutosh Mishra @ashutoshm1771)
  Modified On : [2018-09-20 00:25]	
  Time Complexity : O(MN)
 */

#include <bits/stdc++.h>

using namespace std;

#define endl "\n"
#define rep(i, a, b)             for(int i = a; i < b; i++)
#define REP(i, a, b)             for(int i = a; i <= b; i++)
#define sc(n)                    scanf("%d",&n)
#define sc2(a,b)                 scanf("%d%d", &a, &b) 
#define pb                       push_back
#define ff                       first
#define ss                       second
#define mp                       make_pair
#define mt                       make_tuple
#define clr(a, b)                memset(a,b,sizeof(a)) 
#define all(v)                   (v).begin(),(v).end()
#define rall(v)                  (v).rbegin(),(v),rend()
#define MAX 200005
#define MOD 1000000007

typedef long long int ll;
typedef pair<ll, ll> pii;
typedef vector<ll> vi;
typedef double ld;

int main()  {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    string a, b,c;
    cin >> a >> b >> c;
    int M = a.length();
    int N = b.length();
    int dp[M+1][N+1];
    clr(dp,0);
    for (int i = 0; i <= M; i++) {
    	for (int j = 0; j <= N; j++) {
    		if( (i==0) && (j==0)) {
    			dp[i][j] = 1;
    		}
    		else if((i==0) && (b[j-1]==c[j-1])) { // (A empty)
    			dp[i][j] = dp[i][j-1];
    		}
    		else if((j==0) && (a[i-1]==c[i-1])) { // (B Empty)
    			dp[i][j] = dp[i-1][j];
    		}
    		else if(a[i-1]==c[i+j-1] && b[j-1]!=c[i+j-1]) {
    			dp[i][j] = dp[i-1][j];
    		}
    		else if(b[j-1]==c[i+j-1] && a[i-1]!=c[i+j-1]) {
    			dp[i][j] = dp[i][j-1];
    		}
    		else if((a[i-1]==c[i+j-1]) && (b[j-1]==c[i+j-1])) {
    			dp[i][j] = (dp[i][j-1] || dp[i-1][j]);
    		}
    	}
    }
    if(dp[M][N]) {
    	cout << "Yes they are interleved strings";
    }
    else {
    	cout << "They are not interleved strings";
    }
	return 0;
}
