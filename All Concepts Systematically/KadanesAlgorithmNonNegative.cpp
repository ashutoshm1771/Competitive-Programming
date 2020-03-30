// Author : Ashutosh Mishra

#include<iostream>
#include<vector>
using namespace std;
vector<int> v;
int maxSumCont()
{
	int msf=0,meh=0;
	for(int i=0;i<v.size();i++)
	{
		meh=meh+v[i];
		if(meh<0)meh=0;
		else if(msf<meh)msf=meh;
	}
	return msf;
}
int main()
{
	int n;
	cin>>n;
	v.clear();
	v.resize(n);
	for(int i=0;i<n;i++)
	{
		cin>>v[i];
	}
	cout<<maxSumCont();
	return 0;
}
