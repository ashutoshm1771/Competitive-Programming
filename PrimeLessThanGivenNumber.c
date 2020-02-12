#include<stdio.h>
#include<math.h>
int isPrime(int n)
{
	int i;
	for(i=2;i<=sqrt(n);i++)
	{
		if(n%i==0) return 0;
	}
	return 1;
}
int main()
{
	int n;
	scanf("%d",&n);
	if(!(n&1)) n--;
	int m=n;
	while(n>=2)
	{
		if(isPrime(n))
		{
			printf("%d ",n);	
		}		
		n-=2;
	}	
	if(m>=2)printf("%d",2);
}
