#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int ip;
	vector<int> v;
	for(int i=0;i<n;i++)
	{
		cin>>ip;
		v.push_back(ip);
	}
	for(int i=0;i<n-1;i++)
	{
		for(int j=0;j<n-i;j++)
		{
			if(v[j]>v[j+1])
			{
				v[j]^=v[j+1];
				v[j+1]^=v[j];
				v[j]^=v[j+1];
			}
		}
	}
	for(int i=0;i<n;i++)
	cout<<v[i]<<endl;
}
