#include<stdio.h>

int main()
{
	int n;
	scanf("%d",&n);
	int a[n][n];
	int i=0,j=n/2;
	a[i][j]=1;
	int num=1;
	while(num<=n*n)
	{
		a[i][j]=num;
		if(num%n==0)i++;
		else {
			i--;
			j++;
		}
		if(i<0)i=n-1;
		if(j>n-1)j=0;
		num++;
	}
	
	for(i=0;i<n;i++){
	for(j=0;j<n;j++)
	printf("%d ",a[i][j]);
	printf("\n");
	}
}
