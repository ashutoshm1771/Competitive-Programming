#include<iostream>
#include<math.h>
bool isprime(int);
using namespace std;
int main()
{
	int s,e;
	cin>>s>>e;
	if(s<0)
	s=0;
	if(e<0)
	{
		cout<<"Impossible"<<endl;
		exit(0);
	}
	int sum=0;
	for(int i=s;i<=e;i++)
	{
		if(isprime(i))
		sum+=i;
	}
	cout<<sum<<endl;
}
bool isprime(int n)
{
	if(n==0 || n==1)return false;
	for(int i=2;i<=sqrt(n);i++)
	{
		if(n%i==0)
		return false;
	}
	return true;
}
