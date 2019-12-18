#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	string s;
	cin>>s;
	int n=s.size();
	int size=pow(2,n);
	for(int i=0;i<size;i++)
	{
		cout<<"{";
		for(int j=0;j<n;j++)
		{
			if(i&(1<<j)) cout<<s[j]<<" ";
		}
		cout<<"} "<<endl;
	}
}
