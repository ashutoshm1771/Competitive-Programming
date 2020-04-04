// Author : Ashutosh Mishra

#include<iostream>
#include<vector>
#include<algorithm>
#define mod 1000000007
//#define debug(x) cout<<x<<" ";
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
typedef long long int ll;
vector<ll> v;
bool inline f(ll x, ll y)
{
	return x>y;
}
int main()
{
	IOS
	int n,t;
	cin>>t;
	while(t--)
	{
		cin>>n;
		v.clear();
		v.resize(n);
		for(int i=0;i<n;i++)
		{
			cin>>v[i];
		}
		sort(v.begin(),v.end(),f);
		ll cost=0;
		for(int i=0;i<n;i++)
		{
			//debug(v[i]);
			if(v[i]-i>0)cost+=(v[i]-i)%mod;
		}
		cout<<cost%mod<<endl;
	}
}
