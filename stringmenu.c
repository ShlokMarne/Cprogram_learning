#include<stdio.h>
#include<string.h>
int main()
{
    int choice,i,j;
    char str1[1000];
    char str2[1000];
    printf("====Menu====\n");
    printf("1.Equality of two string.\n");
    printf("2.Check Substring.\n");
    
    printf("\nEnter choice\n");
    scanf("%d",&choice);

    printf("Enter first string: ");
    scanf("%s",str1);
    printf("Enter second string: ");
    scanf("%s",str2);
    switch (choice)
    {
        case 1:
        {
            if (strlen(str1) != strlen(str2))
            {
                printf("Strings are not equal");
                break;
            }
            
            for (i = 0; i < strlen(str1); i++)
            {
                if (str1[i] != str2[i])
                {
                    printf("String not equal");
                    break;
                }
                break;
            }
            printf("Strings are equal");
            break;
        }
        break;
        case 2:
        {
            if (strstr(str1,str2))
            {
                printf("Substring found");
            }
            else
            {
                printf("Substring not found");
            }
            
        }

    }
    return 0;
}