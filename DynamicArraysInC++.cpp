#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
	int n,ip;
	int* a=NULL;
	cin>>n;
	a=new int[n];
	for(int i=0;i<n;i++)
	{
		cin>>ip;
		a[i]=ip;
	}
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	delete[] a;
	a=NULL;
	return 0;
	
}
