/*
  author     : ayushgupta1997
  Created on : [2018-08-14 23:26]	
 
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

vi memo;

int getMinSquares(int n) {
	if(n <= 0)
		return 0;
	if(memo[n]!=INT_MAX)
		return memo[n];
	for ( int i = 1; i*i <= n; i++) {
			
			memo[n] = min(memo[n], 1+getMinSquares(n-(i*i)));
	}
	return memo[n];
}


int main()  {
    //#ifndef ONLINE_JUDGE
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    //#endif
    int n;
    cin >> n;
    for ( int i = 0; i <= n; i++) {
    	memo.pb(INT_MAX);
    }
    int ans = getMinSquares(n);
    cout << "The minimum number of squares required are\n" << ans;

    return 0;
}

