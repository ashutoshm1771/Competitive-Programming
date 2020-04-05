// Author : Ashutosh Mishra

#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
typedef long long int ll;
int main()
{
	IOS
	int t;
	cin>>t;
	ll n,c;
	while(t--)
	{
		cin>>n;
		c=0;
		for(ll i=5;i<=n;i=i*5)
		{
			c+=n/i;	
		}	
		cout<<c<<"\n";
	}	
	return 0;
}
