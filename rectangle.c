#include<stdio.h>
int main()
{
    int l,b,area,perimeter;
    printf("Enter length of rectangle: ",l);
    scanf("%d",&l);
    printf("Enter breadth of rectangle: ",b);
    scanf("%d",&b);
    
    area = l * b;
    printf("Area of rectangle is: %d\n",area);
    
    perimeter = 2 * (l + b);
    printf("Perimeter of rectangle is: %d\n",perimeter);
    
    return 0;
}