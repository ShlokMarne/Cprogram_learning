#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter first number: ",a);
    scanf("%d",&a);
    printf("Enter second number: ",b);
    scanf("%d",&b);

    a > b ? printf("Greatest number is: %d\n",a) : printf("Greatest number is: %d\n",b);
    return 0;
}