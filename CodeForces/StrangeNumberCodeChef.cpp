#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
//#define debug(x) cout<<x<<" ";
using namespace std;
typedef long long int ll;
int main()
{
	int t;
	cin>>t;
	ll x,k;
	while(t--)
	{
		cin>>x>>k;
		if(x >= 2*k) cout<<1<<endl;
		else cout<<0<<endl;
	}
	return 0;
}
