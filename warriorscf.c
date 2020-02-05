//Author : Ashutosh Mishra

#include <stdio.h>
void warriors();
void sort(int p[],int n);
int main() 
{
	int n,i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	warriors();
}
void warriors()
{
    int i,n,q,c,j;
    scanf("%d%d",&n,&q);
    int p[n],x[q];
    for(i=0;i<n;i++)
    scanf("%d",&p[i]);
    //printf("Hello");
    for(i=0;i<q;i++)
    scanf("%d",&x[i]);
    sort(p,n);
    for(i=0;i<q;i++)
    {
        c=0;
        for(j=0;j<n;j++)
        {
            if(x[i]>p[j])
            {
                c++;
                x[i]=2*(x[i]-p[j]);
            }
            else
            {
                break;
            }
        }
        printf("%d\n",c);
    }
}
void sort(int p[],int n)
{
    int i,j,t;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i-1;j++)
        if(p[j]>p[j+1])
        {
            t=p[j];
            p[j]=p[j+1];
            p[j+1]=t;
        }
    }
}

