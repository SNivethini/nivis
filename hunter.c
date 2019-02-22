#include<stdio.h>
#include<string.h>
int main()
{
    int a;
    int arr[10];
    int i;
    int j;
    scanf("%d",&a);
    for(i=1;i<a;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=1;i<a;i++)
    {
        for(j=i+1;j<a;j++)
        {
            if(arr[i]<arr[j])
            {
                int temp;
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    for(i=1;i<a;i++)
    {
       printf("%d",arr[i]);
    }
}
