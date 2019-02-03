#include <stdio.h>
 
int main()
{
 
        int array[5], size, i, min;
	scanf("%d", &size);
 
        for (i = 0; i < size; i++)
		scanf("%d", &array[i]);
 
        min = array[0];
 
        for (i = 1; i < size; i++) 
        {
		if (min >array[i])
			min = array[i];
	}
 
        printf("\ %d", min);
 
        return 0;
 
}
