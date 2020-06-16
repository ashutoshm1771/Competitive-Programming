#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
int findFac(int n)
{
	bool fl=true;
	for(int i=2;i<=(n/2);i++)
	{
		if(n%i==0 && fl) fl=false;
		else if(n%i==0 && !fl)return i;
	}
}
int gDig(int n)
{
	int m=0,r,i=0,pos;
	while(n)
	{
		r=n%10;
		i++;
		if(m<r){
			m=r;
			pos=i;
		}
		n/=10;
	}
	return pos;
}
long int modif(int n)
{
	vector<long int> v;
	long int m=0;
	long int r;
	while(n)
	{
		r=n%10;
		if(r%2==0)r++;
		v.push_back(r);
		n/=10;
	}
	for(int i=v.size()-1;i>=0;i--)
		m=m*10+v[i];
	return m;
}
int main()
{
	IOS
	int t,n,f,g;
	long int mod;
	cin>>t;
	while(t--)
	{
		cin>>n;
		f=findFac(n);
		g=gDig(n);
		mod=modif(n);
		cout<<f<<" "<<g<<" "<<mod<<endl;
	}
	return 0;
}
