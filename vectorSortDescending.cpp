// Author : Ashutosh Mishra

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool f(int x,int y)
{
	return x>y;
}
int main()
{
	int n,ip;
	cin>>n;
	vector<int>v;
	while(n--)
	{
		cin>>ip;
		v.push_back(ip);
	}
	sort(v.begin(),v.end(),f);
	for(int i=0;i<v.size();i++)
	{
		cout<<v[i]<<" ";
	}
}
