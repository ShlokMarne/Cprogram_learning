#include<stdio.h>
int main()
{
    int x,y,max;
    printf("Enter first number: ");
    scanf("%d",&x);
    printf("Enter second number: ");
    scanf("%d",&y);
    max = (x > y) ? x : y;
    while (1)
    {
        if (max % x == 0 && max % y == 0)
        {
            printf("LCM of %d and %d is %d",x,y,max);
            break;
        }
        max++;
    }
    return 0;
}