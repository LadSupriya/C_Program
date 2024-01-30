#include<stdio.h>
int main()
{
  int age;
  printf("Enter your age:");
  scanf("%d",&age);
  if(age>=18)
  {
    printf("\n Eligible for voting");
  } 
  if(age>=70)
  {
    printf("\n Pickup facility is available");
  }
  else
  {
    printf("\n Not eligible for voting");
  }
  return 0;
}