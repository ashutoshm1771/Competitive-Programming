#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		long int n=s.size();
		if(n<=10) cout<<s<<endl;
		else cout<<s[0]<<n-2<<s[n-1]<<endl;
	}
	return 0;
}
