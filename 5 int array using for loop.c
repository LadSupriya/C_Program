//wap to print all 5 array elements using for loop and also print sum of them. 
#include<stdio.h>
int main()
{
  int a[5]={6,7,8,9,4};
  int i; 
  int s=0;
  for(i=0;i<=4;i++)
  {
    printf("\n %d",a[i]);
    s=s+a[i];
  }
  printf("\n sum is%d ",s);
 return 0;
}