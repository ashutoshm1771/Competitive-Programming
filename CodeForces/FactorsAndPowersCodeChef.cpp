// Author : Ashutosh Mishra

#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
typedef long long int ll;
vector<ll> findFac(ll n)
{
	vector<ll> res;
	for(ll i=2;i<=(n/2);i++)
	{
		if(n%i==0) res.push_back(i);
	}
	res.push_back(n);
	return res;
}
int main()
{
	IOS
	int t;
	cin>>t;
	while(t--)
	{
		ll res=0,pres=0,x,k;
		cin>>x>>k;
		vector<ll> facx,fack;
		facx=findFac(x);
		fack=findFac(k);
		for(ll i=0;i<facx.size();i++)
		{
			//cout<<facx[i]<<" ";
			res+=pow(facx[i],k);
		}
		for(ll i=0;i<fack.size();i++)
		{
			//cout<<fack[i]<<" ";
			pres+=fack[i]*x;
		}
		cout<<res<<" "<<pres<<endl;
	}
	return 0;
}
