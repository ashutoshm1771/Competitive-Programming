// Author : Ashutosh Mishra

#include <iostream>
#include <algorithm>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);
typedef long long ll;
using namespace std;

int main() {
	IOS;
	ll n,r,maxim=0;
	cin>>n;
	ll budgets[n];
	for(int i=0;i<n;i++)
	    cin>>budgets[i];
	int size=sizeof(budgets)/sizeof(budgets[0]);
	sort(budgets,budgets+n);
	for(int i=0;i<n;i++)
	{
	    r=budgets[i]*(n-i);
	    maxim=max(r,maxim);
	}
	cout<<maxim;
	return 0;
}

