/*
  author     : Ayush Gupta
  Created on : 12-08-2018
 
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

void knapSack(int W, int wt[], int val[], int n) {
	int K[n+1][W+1];
	//int newwt[n+1] = 0;
	for (int i = 0; i<= n; i++) {
		for (int w = 0; w <= W; w++) {
			if((i == 0) || (w==0)) {
				K[i][w] = 0;

			}
			else if(wt[i-1]<=w) {
				K[i][w] = max(val[i-1]+K[i-1][w-wt[i-1]],K[i-1][w]);

			}
			else {
				K[i][w] = K[i-1][w];
			}
		}
	}
	int maxfun = K[n][W];
	int minmoney = 0;
	for ( int i = 0; i <= W; i++) {
        if(K[n][i] == maxfun){
            minmoney = i;
             break;
        }
	}
	cout << minmoney << " "<< maxfun << "\n";
}


int main()  {
   // #ifndef ONLINE_JUDGE
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    //#endif
    int budget, nparty, money[100], fun[100];
    while(1) {
    	cin >> budget >> nparty;
    	if( (budget == 0) && (nparty == 0))
    		return 0;
    	rep(i, 0, nparty) {
    		cin >> money[i] >> fun[i];
    	}
    	knapSack(budget, money, fun, nparty);
    }

}

