#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int s,t;
	cin>>s>>t;
	int n,r,m,c=0;
	cin>>n;
	for(int i=s+1;i<t;i++)
	{
		m=i;
		while(m!=0)
		{
			r=m%10;
			if(r==n)c++;
			m=m/10;
		}
	}
	cout<<c<<endl;
}
