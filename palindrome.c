#include <stdio.h>
int main()
{
    int n, a = 0, remainder, original;
    scanf("%d", &n);

    original = n;
    while( n!=0 )
    {
        remainder = n%10;
        a = a*10 + remainder;
        n /= 10;
    }

    if ( original == a)
        printf("yes", original);
    else
        printf("no", original);
    
    return 0;
}
