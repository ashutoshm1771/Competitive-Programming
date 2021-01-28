// Author : Ashutosh Mishra

#include<iostream>
#include<vector>

using namespace std;

int minSteps(vector<int>& v)
{
	int n=v.size(),ans=0;
	while(true)
	{
		int i,zc=0;
		for(i=0;i<n;i++)
		{
			if(v[i]&1)break;
			else if(!v[i])zc++;
		}
		if(zc==n)return ans;
		if(i==n)
		{
			for(int j=0;j<n;j++)
			{
				v[j]/=2;
			}
			ans++;
		}
		for(int j=i;j<n;j++)
		{
			if(v[j]&1){
				v[j]--;
				ans++;
			}
		}
	}
}

int main()
{
	int n;
	cin>>n;
	vector<int> v(n);
	for(int i=0;i<n;i++)
	{
		cin>>v[i];
	}
	cout<<minSteps(v);
	return 0;
}
