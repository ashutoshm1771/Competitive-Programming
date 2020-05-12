// Author : Ashutosh Mishra

#include<iostream>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
typedef long long ll;
using namespace std;
void solve()
{
	ll n,k;
	cin>>n>>k;
	if(n%k)cout<<"NO"<<endl;
	else cout<<"YES"<<endl;
}
int main()
{
	IOS
	ll t;
	cin>>t;
	while(t--)
	solve();
	return 0;
}
