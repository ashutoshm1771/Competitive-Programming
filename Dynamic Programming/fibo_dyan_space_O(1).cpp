#include<iostream>
#include<vector>
typedef long long ll;
using namespace std;
int main()
{
	ll n;
	vector<ll> fib;
	cin>>n;
	//fib.push_back(0);
	//fib.push_back(1);
	ll prev=0;
	ll curr=1;
	for(int i=2;i<=n;i++)
	{
		fib.push_back(curr+prev);
		curr=fib[i];
		prev=fib[i-1];
	}
	for(int i=0;i<fib.size();i++)
	{
		cout<<fib[i]<<endl;
	}
}
