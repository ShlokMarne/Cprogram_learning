#include<stdbool.h>
#include<stdio.h>

bool checkYear(int Year)
{
    if (Year % 400 == 0)
    return true;

    if (Year % 100 == 0)
    return false;

    if (Year % 4 == 0)
    return true;

    return false;
}

int main()
{
    int Year;
    printf("Enter year: ",Year);
    scanf("%d",&Year);
    if (checkYear(Year))
    {
        printf("Leap year");
    }
    else
    {
        printf("Not a leap year");
    }
    return 0;
}