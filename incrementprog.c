#include<stdio.h>
int main()
{
    int p,q,R;
    p = 10;
    q = 20;

    R = p++ + ++q;
    printf("value of p = %d\n",p);
    printf("value of q = %d\n",q);
    printf("value of R = %d\n",R);
}