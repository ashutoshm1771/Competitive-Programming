// Author : Ashutosh Mishra

#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
typedef long long int ll;
vector<ll> v,q;
void solve()
{
	for(ll i=0;i<q.size();i++)
	{
		cout<<*max_element(v.begin(),v.begin()+q[i])<<endl;
	}
}
int main()
{
	IOS
	int t;
	cin>>t;
	ll n,qu;
	while(t--)
	{
		v.clear();
		q.clear();
		cin>>n>>qu;
		v.resize(n);
		q.resize(qu);
		for(ll i=0;i<n;i++)
			cin>>v[i];
		for(ll i=0;i<qu;i++)
			cin>>q[i];
		solve();
	}
	return 0;
}
