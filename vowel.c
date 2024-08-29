#include<stdio.h>
#include<ctype.h>
int main()
{
  char ch;
  printf("\nEnter character:");
  scanf("\n%c",&ch);
  if(ch>='a'&&ch<='z')
 {
  if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
  {
    printf("\nVowel");
  }
  else
  {
    printf("\nConsonent");
  }
}
else
{
  printf("\nNot a lower case character");
}
return 0;
}