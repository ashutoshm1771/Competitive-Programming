#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
typedef long long int ll;
int main()
{
	IOS
	int t,ip,c;
	cin>>t;
	vector<int> v;
	ll n;
	while(t--)
	{
		cin>>n;
		v.clear();
		for(ll i=0;i<n;i++)
		{
			cin>>ip;
			v.push_back(ip);
		}
		c=1;
		for(ll i=1;i<n;i++)
		{
			if(v[i]<=v[i-1])c++;
			else v[i]=v[i-1];
		}
		cout<<c<<"\n";
	}
	return 0;
}
