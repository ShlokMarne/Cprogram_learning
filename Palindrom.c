#include<stdio.h>
#include<string.h>
int main()
{
    int i = 0;
    int j = 0;
    int flag = 0;
    char str[1000];
    printf("Enter a string: ");
    scanf("%s",str);
    j = strlen(str) - 1;
    while(i<j)
    {
        if (str[i] != str[j])
        {
            flag = 1;
            break;
        }
        i++;
        j--;
    }
    if (flag == 1)
    {
        printf("Not a Palindrom");
    }
    else
    {
        printf("Palindrom");
    }
}