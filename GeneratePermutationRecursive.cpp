// Author : Ashutosh Mishra

#include<iostream>

using namespace std;

void permute(string a,int l,int r)
{
	if(l==r) cout<<a<<endl;
	else{
		for(int i=l;i<=r;i++)
		{
		swap(a[l],a[i]);
		permute(a,l+1,r);
		swap(a[l],a[i]);
		}
	}
}

int main()
{
	string s;
	cin>>s;
	permute(s,0,s.size()-1);
	return 0;
}
