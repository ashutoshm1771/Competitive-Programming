/*
  author     : Ayush Gupta
 
[2018-08-15 10:52]	
 
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

int arr[1000];
int dp[1000][1000];

int MatrixChain(int i, int j) {
	if( i==j )
		return dp[i][i] = 0;
	if (dp[i][j] != -1) {
		return dp[i][j];
	}
	else {
		dp[i][j] = INT_MAX;
		for ( int  k = i; k <= j-1; k++) {
			dp[i][j] = min(dp[i][j], MatrixChain(i, k)+ MatrixChain(k+1, j) + arr[i-1]*arr[k]*arr[j]);
		}
	}
	return dp[i][j];

}

int main()  {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    int n;
    cin >> n;
   
    for ( int i = 0; i < n; i++) {
    	cin >> arr[i];
    }
     for ( int i = 0; i<= n; i++) {
    	for( int j = 0; j<=n; j++) {
    		dp[i][j] = -1;
    	}
    }
    cout << MatrixChain(1, n-1);

    return 0;
}
