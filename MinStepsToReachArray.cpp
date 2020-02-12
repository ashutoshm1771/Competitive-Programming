#include<iostream>
#include<vector>
using namespace std;

int minStepsTarget(vector<int> v,int n)
{
	int res=0;
	while(true)
	{
		int zc=0;
		int i;
		for(i=0;i<n;i++)
		{
			if(v[i]&1)
			{
				break;
			}
			else if(v[i]==0)
				zc++;
		}
		if(zc==n) return res;
		if(i==n){
			for(int j=0;j<n;j++)
				v[j]/=2;
			res++;
		}
		for(int j=0;j<n;j++)
		{
			if(v[j]&1)
			{
				v[j]--;
				res++;
			}
		}
	}
}
int main()
{
	int n;
	cin>>n;
	vector<int> v; int ip;
	for(int i=0;i<n;i++)
	{
		cin>>ip;
		v.push_back(ip);
	}
	cout<<minStepsTarget(v,n)<<endl;
	return 0;
}

