#include <stdio.h>
 
int main(void) 
{
	int num,s=0,sq,rem;
	scanf("%d",&num);
	while(num!=0)
	{
		rem=num%10;
		sq=rem*rem;
		s=s+sq;
		num=num/10;
	}
	printf("\n%d",s);
	return 0;
}
