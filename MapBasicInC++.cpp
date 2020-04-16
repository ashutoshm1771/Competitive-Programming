// Author : Ashutosh Mishra

#include<iostream>
#include<map>
using namespace std;
int main()
{
	int n,ip;
	cin>>n;
	map<int,int> m;
	for(int i=0;i<n;i++)
	{
		cin>>ip;
		m[ip]++;
	}
	m.insert(pair<int,int>(20,3));
	for(map<int,int>::iterator it=m.begin();it!=m.end();it++)
	{
		cout<<it->first<<" "<<it->second<<endl;
	}
	return 0;
}
