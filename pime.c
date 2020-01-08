#include<stdio.h>
#include<math.h>
int main()
{
	int n=100,a=100;
	int i,j,c=0,prime=0;
	for(i=3;i<n;i+2)
	{
		c=0;
		for(j=2;j<sqrt(n);j++)
		{
			if(i%j==0)
			c++;
		}
		if(c>1){prime++;
		printf("%d\n",i);
	}
	}
	printf("%d",prime);
}
