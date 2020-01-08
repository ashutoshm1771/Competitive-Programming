#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int n;
int main()
{
	int i,j;
	scanf("%d",&n);
	char a[n][n];
	for(i=0;i<n;i++)
	for(j=0;j<n;j++)
	scanf("%c",&a[i][j]);
	int l=countl(a,n);
    int r=countr(a,n);
    if(l==r){
        printf("0");
        exit(0);
    }
    int x[n],left,right;
    char t;
    for(i=0;i<n;i++)
    {
       if(i!=0)swap(a,n,i-1);
       swap(a,n,i);
       left=countl(a,n);
       right=countr(a,n);
       x[i]=abs(left-right);
    }
    int smal=x[0];
    for(i=1;i<n;i++)
    if(smal<x[i])smal=x[i];
    printf("%d",smal);
}
void swap(char a[][n],int n,int r)
{
    int j;char t;
     for(j=0;j<n/2;j++)
        {
            t=a[r][j];
            a[r][j]=a[r][j+1];
            a[r][j+1]=t;
        }
}
int countl(char a[][n],int n)
{
    int i,j,l=0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n/2;j++)
        {
            if(a[i][j]=="1")l++;
        }
    }
    return l;
}
int countr(char a[][n],int n)
{
    int i,j,r=0;
    for(i=0;i<n;i++)
    for(j=(n/2+1);j<n;j++)
    if(a[i][j]=="1")r++;
    return r;
}
