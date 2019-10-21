/*
  author     : Ayush Gupta
  
[2018-09-04 20:59]
 
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

int wt[MAX], profit[MAX];
int dp[1005][215];
int K, M;
int ans = 0;
int solve(int capacity, int idx) {
	if(idx == M || capacity<=0) {
		return 0;
	}
	if(dp[capacity][idx]!=-1) {
		return dp[capacity][idx];
	}
	if(capacity < wt[idx]) {
		return solve(capacity,idx+1);
	}
	if(capacity >= wt[idx]) {
		dp[capacity][idx] = max(solve(capacity, idx+1), solve(capacity-wt[idx], idx+1)+profit[idx]);
		return dp[capacity][idx];
	}



}

int main()  {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    int t;
    cin >> t;
    while(t--) {
    	
    	cin >> K >> M;
    	
    	for ( int i = 0; i < M; i++) {
    		cin >> wt[i] >> profit[i];
    	}
    	memset(dp,-1,sizeof(dp));

    	cout << "Hey stupid robber, you can get " << solve(K, 0) << ".\n";
    	
    }

    return 0;
}
