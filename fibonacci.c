#include<stdio.h>
int main()
{
  int n1,n2,n3,t,i;
  printf("\nEnter 1st no. and 2nd no.:");
  scanf("%d %d",&n1,&n2);
  printf("\nEnter no.of terms:");
  scanf("%d",&t);
  printf("\nFibonacci series is:\n%d\n%d",n1,n2);
  for(i=3;i<=t;i++)
  {
  n3=n1+n2;
  printf("\n%d",n3);
  n1=n2;
  n2=n3;
  }
return 0;
}