#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int n;
	cin>>n;
	vector<int> v;
	int i=0;
	while(n--)
	{
		cin>>i;
		v.push_back(i);
	}
	for(int i=0;i<v.size();i++)
		cout<<v[i]<<" ";
	return 0;
}
