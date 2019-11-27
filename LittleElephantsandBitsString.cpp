#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	string s,res="";
	int c=0;
	cin>>s;
	for(int i=0;s[i];i++)
	{
		if(s[i]=='0' && c==0)c++;
		else if(s[i]=='0' && c>0)res=res+s[i];
		else if(s[i]=='1')res=res+s[i];
	}
	if(c==0)res.erase(res.end()-1);
	cout<<res<<endl;
	return 0;
}
