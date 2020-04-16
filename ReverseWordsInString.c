// Author : Ashutosh Mishra

#include<stdio.h>
int main()
{
	char s[1000],t;
	int i,inword,sw,ew,j;
	gets(s);
	for(i=0;s[i]!='\0';i++)
	{
		if(inword==0)
		{
			if(!isspace(s[i]) && !ispunct(s[i]))
			{
				sw=i;
				inword=1;
			}
		}
		else if(isspace(s[i]) || ispunct(s[i]))
		{
			inword=0;
			ew=i-1;
			for(i=sw,j=ew;i<=j;i++,j--)
			{
				t=s[i];
				s[i]=s[j];
				s[j]=t;
			}
		}
	}
	if(!ispunct(s[i]) && !isspace(s[i]))
	{
		ew=i-1;
		for(i=sw,j=ew;i<=j;i++,j--)
		{
			t=s[i];
			s[i]=s[j];
			s[j]=t;
		}
	}
	puts(s);
	
}
