#include<iostream>
#include<vector>
typedef long long ll;
using namespace std;
int main()
{
	ll n;
	vector<ll> fib;
	cin>>n;
	fib.push_back(0);
	fib.push_back(1);
	for(int i=2;i<=n;i++)
	{
		fib.push_back(fib[i-1]+fib[i-2]);
	}
	for(int i=0;i<fib.size();i++)
	{
		cout<<fib[i]<<endl;
	}
}
