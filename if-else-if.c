#include<stdio.h>
int main()
{
    int marks;
    printf("Enter the marks: ",marks);
    scanf("%d",&marks);
    
    if (marks > 100)
        printf("!!Marks should be between 0 - 100!!");
    else if (marks >= 75)
        printf("Grade: Distinction ");
    else if (marks >= 60)
        printf("Grade: First Class");
    else if (marks >= 50)
        printf("Grade: Second Class");
    else if (marks >= 40)
        printf("Grade: Pass");
    else
        printf("Grade: Fail");

    return 0;
}