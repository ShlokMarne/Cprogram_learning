#include<stdio.h>
#define pi 3.14159
int main()
{
    float radius,area;
    printf("Radius of circle: ");
    scanf("%f",&radius);
    area = pi*radius*radius;
    printf("\nArea of circle: %f",area);
    return 0;
}