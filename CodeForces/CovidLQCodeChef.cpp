// Author : Ashutosh Mishra

#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
//#define debug(x) cout<<x<<" ";
using namespace std;
vector<int> v;

string checkValid()
{
	bool fl=true;
	int prev;
	for(int i=0;i<v.size();i++)
	{
		if(v[i] && fl){
			prev=i;
			fl=false;
		}
		else if(v[i] && !fl){
			if(i-prev<6)return "NO";
			prev=i;
		}
	}	
	return "YES";
}
int main()
{
	IOS
	int t,n;
	cin>>t;
	while(t--)
	{
		cin>>n;
		v.clear();
		v.resize(n);
		for(int i=0;i<n;i++)
		{
			cin>>v[i];
		}
//		for(int i=0;i<n;i++)
//			debug(v[i]);
		cout<<checkValid()<<endl;
	}
	return 0;
}
