#include<iostream>
#include<malloc.h>
using namespace std;
int main()
{
	int *a,n,i;
	cin>>n;
	a=(int *)malloc(n*sizeof(int));
	for(int i=0;i<n;i++)
	cin>>a[i];
	for(int i=0;i<n;i++)
	cout<<a[i];
	return 0;
}
