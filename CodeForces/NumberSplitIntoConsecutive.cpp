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
	int nd=1,n=s.size(),st=0,en=0;
	string pt="",nt="";
	bool fl=true;
	while(nd<(n/2))
	{
//		pt="";
//		nt="";
		pt=nt;
		if(fl){
			for(int i=st;i<=en;i++)
				pt+=s[i];
			fl=false;
			st=en+1;
			en=st+nd-1;
		}
		for(int i=st;i<=en;i++)
			nt+=s[i];
		cout<<pt<<" "<<nt<<endl;
		if((atoii(nt)-atoii(pt) ) !=1 )
		{
			en++; if(en>=n) return false;
			nt+=s[en];
			cout<<nt<<endl;
			if((atoii(nt)-atoii(pt) ) !=1 )
			{
				cout<<"b"<<endl;
				nd++;
				st=0;
				en=st+nd-1; if(en>=n) return false;
				continue;
			}
			else{
				cout<<"c"<<endl;
				nd++;
				fl=true;
				st=en+1;
				en=st+nd-1; if(en>=n) return true;
				continue;
			}
		}
		else{
			cout<<"a"<<endl;
			st=en+1;
			en=st+nd-1;
			continue;
		}
	}
	return true;
}
int main()
{
	string s;
	cin>>s;
	if(valid(s)) cout<<"Possible";
	else cout<<"Not Possible";
	return 0;
	
}
