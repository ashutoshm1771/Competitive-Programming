#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,m;
		cin>>n>>m;
		if(n==m)
		{
			cout<<m<<endl;
		}
		else if(n<m)
		{
			cout<<n*(round(m/n))<<endl;
		}
		else{
			if(n>m-n)cout<<m<<endl;
			else cout<<0<<endl;
		}
	}
	return 0;
}
