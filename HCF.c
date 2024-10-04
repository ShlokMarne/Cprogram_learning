#include<stdio.h>
int main()
{
    int num1,num2,i,hcf;
    printf("Enter first number: ",num1);
    scanf("%d",&num1);
    printf("Enter second number: ",num2);
    scanf("%d",&num2);
    for(i = 1 ; i <= num1 && i <= num2 ; i++)
    {
        if(num1 % i == 0 && num2 % i == 0)
        hcf = i;
    }
    printf("HCF of numbers %d and %d is %d\n",num1,num2,hcf);
    return 0;
}