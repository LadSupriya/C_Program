#include<stdio.h>
int main()
{
  int num1, num2;
  printf("\n Enter any number:");
 scanf("%d",&num1);
 printf("\n Enter any number:");
 scanf("%d",&num2);
 if(num1>num2)
 {
   printf("\n Largest number is:%d",num1);
  }
  if(num2>num1)
  {
    printf("\n Largest number is:%d",num2);
  }
  else
  {
    printf("\n Both number are same");
  }
  return 0;
}
