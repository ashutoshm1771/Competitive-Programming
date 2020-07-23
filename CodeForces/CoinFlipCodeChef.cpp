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
	int g,i,n,q;
	while(t--)
	{
		cin>>g;
		while(g--)
		{
			cin>>i>>n>>q;
			if(q==i) cout<<(n/2)<<"\n";
			else cout<<((n/2)+n%2)<<"\n";
		}
	}
	return 0;
}
