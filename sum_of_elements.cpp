#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector<int> v;
	int n,i;
	cin>>n;
	while(n--)
	{
		cin>>i;
		v.push_back(i);
	}
	int s=0;
	for(i=0;i<v.size();i++)
	{
		s=s+v[i];
		
	}
	cout<<s<<endl;
	
}
