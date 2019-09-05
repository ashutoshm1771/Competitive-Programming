#include<stdio.h>

//using namespace std;
int main()
{
	int n,i,m,rev,r;;
	scanf("%d",&n);
	for(i=1;i<n;i++)
	{
		m=i;
		rev=0;
		while(m>0)
		{
			r=m%10;
			rev=rev*10+r;
			m=m/10;
		}
		if(Palindrome(i+rev))
		printf("%d\n",i);
	}
}
int Palindrome(int n)
{
	int r,s=0,m=n;
	while(n>0)
	{
		r=n%10;
		s=s*10+r;
		n=n/10;
	}
	if(s==m)
	return 1;
	else
	return 0;
}
