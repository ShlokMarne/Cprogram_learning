#include<stdio.h>
int main()
{
    int a,b,temp;
    printf("Enter numbers to swap: ",a,b);
    scanf("%d %d",&a,&b);
    printf("Before swapping: a = %d, b = %d\n",a,b);
    temp = a;
    a = b;
    b = temp;
    printf("After swapping: a = %d, b = %d\n",a,b);
    return 0;
}