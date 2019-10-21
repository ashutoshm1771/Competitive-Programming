#include <bits/stdc++.h>
using namespace std;

int knapsack(int val[], int wt[], int W,int n) {
    if(W==0 ||  n==0) {
        return 0;
    }
    if(wt[n-1] > W ) {
        return knapsack(val,wt,W,n-1);
    }
    else 
      return max ( val[n-1]+knapsack(val,wt,W-wt[n-1],n-1), knapsack(val,wt,W,n-1));
}

int main() {
    int val[50];
    int wt[50];
    int W,n;
    cin >> n;
    for(int i=0;i<n;i++) {
        cin>> val[i];
    }
    for(int j=0;j<n;j++) {
        cin >> wt[j];
    }
    cin >> W;
    cout << knapsack(val,wt,W,n);
    return 0;
}
