#include<bits/stdc++.h>
using namespace std;
int atoii(string s)
{
	char st[s.size()];
	for(int i=0;s[i];i++)
		st[i]=s[i];
	return atoi(st);
}
bool valid(string s)
{
	bool fl=true;
	int nd=1,n=s.size(),st=0,en=0;
	string pt="",nt="",m;
	while(nd<(n/2) && en<n)
	{
		if(fl){
			for(int i=st;i<=en;i++)
				pt+=s[i];
			fl=false;
			st=en+1;
			en=st+nd-1;
		}
		else pt=nt;
		nt="";
		for(int i=st;i<=en;i++)
			nt+=s[i];
		if( ( atoii(nt) - atoii(pt) ) == 1)
		{
			st=en+1;
			en=st+nd-1;
			if(en>=n)return true;
		}
		else{
			if(en>=n-1)return false;
			m=n+s[en+1]; 
			if( (atoii(m) - atoii(pt))==1){
				nd++;
				en++;
				nt=m;
				st=en+1;
				en=st+nd-1;
				if(en>=n)return true;
			}
			else{
				nd++;
				fl=true;
				st=0;
				en=st+nd-1;
				if(en>=n)return false;
			}
		}
	}
	return 0;
}
int main()
{
	string s;
	cin>>s;
	//cout<<atoii(s)+2<<endl;
	if(valid(s)) cout<<"Possible";
	else cout<<"Not Possible";
	return 0;
	
}
