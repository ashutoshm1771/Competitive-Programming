#include<stdio.h>
int main()
{
	int i,s,n;
	scanf("%d %d",&s,&n);
	//printf("%d\n",s);
	for(i=0;i<n;i++)
	{
		if(i%2!=0)
		{
			if(s%2!=0)
			{
				printf("1 ");
				s=s+1;
			}
			else
			{
				printf("2 ");
				s=s+2;
			}
		}
		else
		{
			printf("%d ",s);
		}
	}
}
