#include<bits/stdc++.h>
using namespace std;
map<char,int> m;
void solve(string s)
{
	int hashVal=0;
	for(int i=0;s[i];i++)
		hashVal+=m[s[i]];
	
}
int main()
{
	int t;
	cin>>t;
	for(int i=0;i<26;i++)
	{
		m[char(97+i)]=i;
	}
	string s;
	while(t--)
	{
		cin>>s;
		solve(s);
	}
	return 0;
}
