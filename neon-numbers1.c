#include <stdio.h>
int isNeon(int num) 
{
    int square = num * num;
    int sum = 0;

    while (square > 0) 
    {
        sum += square % 10;
        square /= 10;
    }
    return (sum == num);
}

int main() 
{
    printf("Neon numbers between 1 and 100 are:\n");
    for (int i = 1; i <= 100; i++)
    {
        if (isNeon(i)) 
        {
            printf("%d ", i);
        }
    }
    return 0;
}