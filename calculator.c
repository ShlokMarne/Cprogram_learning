#include<stdio.h>
int main()
{
    int n1,n2,op;
    printf("Enter two numbers: ",n1,n2);
    scanf("%d %d",&n1,&n2);

    printf("\n:Menu");
    printf("\n1:Addition");
    printf("\n2:Subtrction");
    printf("\n3:Multiplication");
    printf("\n4:Division");
    printf("\nPlease select the operator: ");
    scanf("%d",&op);

    switch(op)
    {
        case 1: printf("Sum is: %d",n1 + n2);
                break;
        case 2: printf("Difference is: %d",n1 - n2);
                break;
        case 3: printf("Produt is: %d",n1 * n2);
                break;
        case 4: printf("Quotient is: %d",n1 / n2);
                break;
    }

    return 0;
}