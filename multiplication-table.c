#include<stdio.h>
void print_table(int range, int num)
{
    int mul, i;
    for (i = 1; i <= range; i++)
    {
        mul = num * i;
        printf("%d * %d = %d",num,i,mul);
        printf("\n");
    }
}

int main()
{
    int num,range;
    printf("Enter table no.: ",num);
    scanf("%d",&num);
    printf("Enter range: ",range);
    scanf("%d",&range);
    print_table(range,num);
    return 0;
}