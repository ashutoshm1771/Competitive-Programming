#include<stdio.h>
#include<math.h>
int main()
{
    int i,j,d,k;
    scanf("%d %d %d",&i,&j,&d);
    int m,r,s,c=0,result;
    float res;
    for(k=i;k<=j;k++)
    {
    	m=k;s=0;
    	while(m!=0)
    	{
    		r=m%10;
    		s=s*10+r;
    		m=m/10;
		}
		if(((abs(k-s))%d)==0)c++;
	}
	printf("%d",c);
}
