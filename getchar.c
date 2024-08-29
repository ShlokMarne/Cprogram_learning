#include<stdio.h>
int main()
{
    char ch;
    char name[20];
    printf("Enter your name: ");
    gets(name);
    printf("Entered name = %s\n", name);
    printf("Enter 1 character: ");
    ch = getchar();
    printf("Entered character = %c\n", ch);
    return 0;

}