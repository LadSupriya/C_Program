//wap to read 10 int values and print sum of all numbers entered
#include<stdio.h>
int main()
{
  int a[10],i,s=0;
  printf("\n Enter any 10 elements");
  for(i=0;i<=9;i++)
  {
    scanf("%d",&a[i]);
    
  }
  printf("\nAll array elements");
  for(i=0;i<=9;i++)
  {
    printf("\n %d",a[i]);
    s=s+a[i];
  }
  printf("\n sum is%d",s);
  
  
  
  return 0;
}