#include<stdio.h>
void main()
{
int m,hr;
scanf("%d",&m);
hr=m/60;
m=m%60;
printf("%d %d",hr,m);
}
