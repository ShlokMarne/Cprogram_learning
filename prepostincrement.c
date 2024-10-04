#include<stdio.h>
int main()
{
    int p,q;
    p = 10;
    q = 20;
    /*POST INCREMENT*/
    printf("value of p                  :%d\n",p);
    printf("vaue of p++                 :%d\n",p++);
    printf("value of new p              :%d\n",p);

    /*PRE INCREMENT*/
    printf("value of q                  :%d\n",q);
    printf("value of ++q                :%d\n",++q);
    printf("value of new q              :%d\n",q);
    return 0;
}