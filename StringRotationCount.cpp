// Author : Ashutosh Mishra

#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	vector<string> original(n),duplicate(n);
	for(int i=0;i<n;i++)
	{
		cin>>original[i];
		duplicate[i]=original[i]+original[i];
	}
	int maxRot=INT_MAX,temp;
	bool fl=false;
	for(int j=0;j<n;j++)
	{
		temp=0;
		for(int i=0;i<n;i++)
		{
			size_t f=duplicate[i].find(original[j]);
			if(f==string::npos) { fl=true; break; }
			temp+=f;
		}
		if(fl) break;
		maxRot=min(maxRot,temp);
	}
	if(fl) cout<<-1;
	else
	cout<<maxRot;
	return 0;
}
