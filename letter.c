#include <stdio.h>
#include<string.h>
void main(void) 
{
	char a[10],b[10];
	int i,j,len1,len2,c=0;
	scanf("%s %s",a,b);
	len1=strlen(a);
	len2=strlen(b);
	if(len1==len2)
	{
		for(i=0;i<len1;i++)
		{
			
			if(a[i]!=b[i])
			{
				c=c+1;
			}
			
		}
		if(c==1)
		{
			printf("yes\n");
		}
		else
		{
			printf("no\n");
		}
	}
	else
	{
		printf("no\n");
	}

}
