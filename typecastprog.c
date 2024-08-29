#include<stdio.h.>
int main()
{
    char ch;
    printf("Enter character to get ascci value: ",ch);
    ch = getchar();
    printf("Character ch is %c\n",ch);
    printf("Numeric ch is %d\n",(int)ch);
}