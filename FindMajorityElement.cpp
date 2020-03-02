#include<iostream>
#include<vector>
using namespace std;

int findMajority(vector<int> v)
{
	int n=v.size();
	int c=1,m=0;
	for(int i=1;i<n;i++)
	{
		if(v[m]==v[i])
			c++;
		else c--;
		if(c==0)
		{
			m=i;
			c=1;
		}
	}
	return m;
}
bool isMajority(vector<int> v,int m)
{
	int c=0;
	for(int i=0;i<v.size();i++)
	if(v[m]==v[i])c++;
	if(c>(v.size())/2)return true;
	return false;
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
	int m=findMajority(v);
	if(isMajority(v,m))
		cout<<v[m]<<endl;
	else
		cout<<"No majority element";
	return 0;
}
