// Author : Ashutosh Mishra

#include<iostream>
#include<vector>
using namespace std;
void permute(vector<int> &v,int l,int r)
{
	if(l==r)
	{
		for(int i=0;i<v.size();i++)
		cout<<v[i]<<" ";
	cout<<endl;
	}
	else
	{
		for(int i=l;i<=r;i++)
		{
			swap(v[l],v[i]);
			permute(v,l+1,r);
			swap(v[l],v[i]);
		}
	}
}
int main()
{
	int n,ip;
	cin>>n;
	vector<int> v;
	for(int i=0;i<n;i++)
	{
		cin>>ip;
		v.push_back(ip);
	}
	permute(v,0,n-1);
}
