#include<iostream>
#include<vector>
#include<math.h>
typedef long double ld;
bool isSquare(int);
using namespace std;
int main()
{
	int n;
	cin>>n;
	vector<int> v;
	int ip;
	for(int i=0;i<n;i++)
	{
		cin>>ip;
		v.push_back(ip);
	}
	int s=0;
	
	for(int i=0;i<n;i++)
	{
		if(isSquare(v[i]))
			s+=v[i];
	}
	cout<<s<<endl;
}
bool isSquare(int x)
{
	ld s=sqrt(x);
	if(s-floor(s)==0)
	return true;
	else
	return false;
}
