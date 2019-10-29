#include<iostream>
#include<map>
using namespace std;
int main()
{
	map<int,int>m;
	m.insert(pair<int,int>(2,4));
	m.insert(pair<int,int>(3,5));
	m.insert(pair<int,int>(6,7));
	cout<<m[2]<<" "<<m[3]<<endl;
	m.erase(3);
	for(map<int,int>::iterator i=m.begin();i!=m.end();i++)
	{
		cout<<i->first<<" "<<i->second<<endl;
	}
	cout<<m.upper_bound(2)->first<<" "<<m.upper_bound(2)->second<<endl;
	cout<<m.lower_bound(2)->first<<" "<<m.lower_bound(2)->second<<endl;
}
