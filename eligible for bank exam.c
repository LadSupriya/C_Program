#include<stdio.h>
int main()
{
  int age;
  printf("enter your age:");
  scanf("%d",&age);
  printf("your age is :%d",age);
  if(age>=21&&age<=30)
  {
    printf("\n eligible for bank exam");
  }
  else
  {
    printf("\n not eligible for bank exam");
  }
  return 0;
}