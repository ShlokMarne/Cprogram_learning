#include<stdio.h>
int main()
{
    int n,i;
    float sum = 0.0,average;
    printf("Enter the number of elements in the array: ");
    scanf("%d",&n);
    float arr[n];
    printf("Enter the elements of the array:\n");
    for(i=0;i<n;i++)
    {
        scanf("%f",&arr[i]);
        sum += arr[i];
    }
    average = sum/n;
    printf("The average of the elements in the array is %.2f\n",average);
    return 0;
}