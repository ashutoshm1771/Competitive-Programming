#include<iostream>
#include<set>
using namespace std;
int main()
{
	int n,ip;
	set<int> s;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>ip;
		s.insert(ip);
	}
	for(set<int>::iterator it=s.begin();it!=s.end();++it)
		cout<<*it<<" ";
	return 0;
}
