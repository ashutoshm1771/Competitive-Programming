#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int n;
	cin>>n;
	vector<bool> bin;
	while(n)
	{
		bin.push_back(n&1);
		n >>= 1;
	}
	bin.push_back(0);
	for(int i=0;i<bin.size();i++)
	{
		cout<<bin[i]<<" ";
	}
	return 0;
}
