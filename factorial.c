#include<stdio.h>
unsigned int factorial(unsigned int N)
{ 
    int fact = 1,i;
    for(i = 1; i <= N; i++)
    {
        fact *= i;
    }
    return fact;
}

int main()
{
    int N;
    printf("Enter number: ",N);
    scanf("%d",&N);
    int fact = factorial(N);
    printf("Factorial of %d is %d",N,fact);
    return 0;
}