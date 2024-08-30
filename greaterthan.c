#include<stdio.h>
int main()
{
    int n1,n2;
    printf("Enter first number: ",n1);
    scanf("%d",&n1);
    printf("Enter second number: ",n2);
    scanf("%d",&n2);
    
    if (n1 > n2)
        printf(" %d is greater than %d ",n1,n2);
    if (n1 < n2)
        printf(" %d is less than %d ",n1,n2);
    if (n1 == n2)
        printf(" %d is equal to %d ",n1,n2);
    
    return 0;
}