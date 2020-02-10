// Author : Ashutosh Mishra

#include<iostream>
#include<algorithm>
#include<vector>
#include<set>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n,k,ip;
	cin>>k>>n;
	vector<int> v;
	set<int> ans;
	for(int i=0;i<n;i++)
	{
		cin>>ip;
		v.push_back(ip);
	}
	sort(v.begin(),v.end());
	int s=0;
	for(int i=n-1;i>=0;i--)
	{
		if((s+v[i])<k){ s+=v[i];
			ans.insert(i);
		}
	}
	cout<<ans.size()<<endl;
	for(set<int>::iterator it=ans.begin();it!=ans.end();it++)
		cout<<*it<<" ";
}
