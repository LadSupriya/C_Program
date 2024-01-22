#include<stdio.h>
int main()
{
  char a[15];
  char s[15]; 
  int pin;
  printf("\nEnter your name");
  scanf("%s",&a);      //shital
  printf("\nEnter your surname");
  scanf("%s",&s);
  printf("\nEnter your pin");
  scanf("%d",&pin);
  printf("\nYour name is %s",a);
  printf("\nSurname is %s",s);
  printf("\nAvailable balance is 2000/-");
  return 0;
}