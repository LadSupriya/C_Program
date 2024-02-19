//wap to print all array elements using for loop.
#include<stdio.h>
int main()
{
  int a[6]={43,23,67,87,34,34};
  int i;
  for(i=0;i<=5;i++)
  {
    printf("\n%d",a[i]);
  } 
  int sum;
  sum=a[0]+a[5];
   printf("\n sum is%d",sum);
  
  return 0;
}