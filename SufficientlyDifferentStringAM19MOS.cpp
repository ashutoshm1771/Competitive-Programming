#include<iostream>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		int k;
		cin>>s>>k;
		string t="abcdefghijklmnopqrstuvwxyz",r="";
		for(int i=0;t[i];i++)
		{
			size_t f=s.find(t[i]);
			if(f==string::npos)
				r+=t[i];
			else if(f!=string::npos && k>0)
			{
				r+=t[i];
				k--;
			}
			if(r.size()==s.size())break;
		}
		if(r.size()==0)cout<<"NOPE"<<endl;
		else cout<<r<<endl;
	}
	return 0;
}
