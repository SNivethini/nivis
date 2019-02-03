#include<stdio.h>
void main()
{
int hr,min,h1,m1,h2,m2;
scanf("%d %d",&h1,&m1);
scanf("%d %d",&h2,&m2);
hr=h2-h1;
min=m2-m1;
printf("%d %d",hr,min);
}
