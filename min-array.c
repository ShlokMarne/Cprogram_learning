#include<stdio.h>
int main()
{
    int arr[10],i,min;
    for(i=0;i<10;i++)
    {
        printf("Enter elements in array: ");
        scanf("%d",&arr[i]);
    }
    min = arr[0];
    for(i=0;i<10;i++)
    {
        if(arr[i] < min)
        {
            min = arr[i];
        }
    }
    printf("The minimum elements in array is: %d\n",min);
    return 0;
}