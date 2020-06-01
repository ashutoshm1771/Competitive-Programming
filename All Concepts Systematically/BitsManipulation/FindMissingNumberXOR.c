// Author : Ashutosh Mishra

#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int a[n],i,j;
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	int m=a[0];
	for(i=1;i<n;i++)
	if(m<a[i])m=a[i];
	int c=0;
	for(i=0;i<n;i++)
	c=c^a[i];
	for(i=0;i<=m;i++)
	c=c^i;
	printf("%d ",c);
	return 0;
}
