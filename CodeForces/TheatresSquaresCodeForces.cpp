// Author : Ashutosh Mishra

#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	long double n,m,a;
	cin>>n>>m>>a;
	long double r=ceil(n/a);
	long double c=ceil(m/a);
	if(r==1 && c==1)cout<<1;
	else if(r==1 && c>1)cout<<c;
	else if(r>1 && c==1)cout<<r;
	else cout<<(long long int)(r*c);
	return 0;
}
