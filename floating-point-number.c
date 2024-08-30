#include<stdio.h>
int main()
{
    float a,b,product;
    printf("Enter first number: \n");
    scanf("%f",&a);
    printf("Enter second number: \n");
    scanf("%f",&b);
    product = a * b;
    printf("Product of entered numbers is:%.3f",product);
    return 0;
}