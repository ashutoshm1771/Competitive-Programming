// Author : Ashutosh Mishra

#include<stdio.h>
int rec(int a[],int n)
{
	if(n==1)return a[0];
	else{
		int m;
		m=rec(a,n-1);
		if(m<a[n-1]) return m;
		else return a[n-1];
	}
}

int main()
{
	int n;
	scanf("%d",&n);
	int i,a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("%d",rec(a,n));
}
