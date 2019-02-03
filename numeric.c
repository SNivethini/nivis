#include<stdio.h>
#include<ctype.h>
 
int main()
{
    char a;
    scanf( "%c", &a );
    if( isdigit(a) )
        printf( "yes", a );
    else
        printf( "No", a );
    return 0;
   }
