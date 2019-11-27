#include<iostream>
#include<vector>
typedef long long ll;
using namespace std;
int main()
{
	 ll n,res=0;
	int r,c=0;
	cin>>n;
	vector<int> v;
	while(n!=0)
	{
		r=n%10;
		v.push_back(r);
		n=n/10;
	}
	for(int i=v.size()-1;i>=0;i--)
	{
		if(v[i]==0 && c==0)c++;
		else if(v[i]==0 && c>0) res=res*10+v[i];
		else if(v[i]==1) res=res*10+v[i];
	}
	cout<<res<<endl;
	return 0;
}
