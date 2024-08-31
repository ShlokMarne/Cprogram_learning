#include<stdio.h>
int main()
{
    int A,B,C;
    printf("Enter first number: ",A);
    scanf("%d",&A);
    printf("Enter second number: ",B);
    scanf("%d",&B);
    printf("Enter third number: ",C);
    scanf("%d",&C);

    if (A >= B)
    {
        if (A >= C)
            printf("%d is the largest number.",A);
        else
            printf("%d is the largest number.",C);
    }
    
    if (B >= C)
    {
        if (B >= C)
            printf("%d is the largest number.", B);
        else
            printf("%d is the largest number.", C);
    }
    return 0;
}