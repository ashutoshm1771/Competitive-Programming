#include<stdio.h>

void reverse(int a[],int low,int high)
{
	int t,i,j;
	for(i=low,j=high;i<j;i++,j--)
	{
		t=a[i];
		a[i]=a[j];
		a[j]=t;
	}
}
int main()
{
	int n,i;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	int d;
	scanf("%d",&d);
	reverse(a,0,d-1);
	reverse(a,d,n-1);
	reverse(a,0,n-1);
	for(i=0;i<n;i++)
	printf("%d ",a[i]);
}
