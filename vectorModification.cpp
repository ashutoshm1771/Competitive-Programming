#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int n,ip;
	vector<int> v;
	cin>>n;
	while(n--)
	{
		cin>>ip;
		v.push_back(ip);
	}
	v[2]^=v[3];
	v[3]^=v[2];
	v[2]^=v[3];
	for(int i=00;i<v.size();i++)
	cout<<v[i]<<endl;
}
