// Author : Ashutosh Mishra

#include<iostream>
using namespace std;
int main()
{
	int n,m;
	cin>>n>>m;
	cout<<n<<m<<endl;
	n^=m;
	m^=n;
	n^=m;
	cout<<n<<m<<endl;
}
