#include<iostream>
#include<vector>
using namespace std;
vector<int> v;
int maxSumCont()
{
	int currMax=v[0],msf=v[0];
	for(int i=1;i<v.size();i++)
	{
		currMax=max(v[i],currMax+v[i]);
		msf=max(currMax,msf);
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
		cin>>v[i];
	cout<<maxSumCont();
	return 0;
}
