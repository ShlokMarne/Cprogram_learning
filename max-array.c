#include<stdio.h>
int main()
{
    int arr[10],i,max;
    for(i=0;i<10;i++)
    {
        printf("Enter elements in array: ");
        scanf("%d",&arr[i]);
    }
    max = arr[0];
    for(i=1;i<10;i++)
    {
        if(arr[i] > max)
        {
            max = arr[i];
        }
    }
    printf("The maximum element in array is: %d\n",max);
    return 0;
}