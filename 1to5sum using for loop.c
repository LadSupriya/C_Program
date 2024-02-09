#include<stdio.h>
int main()
{
  int i;
  int s=0;
  for(i=1;i<=5;i++)
  {
    printf("\n %d",i);
    s=s+i;
  }
  printf("\n sum of all number is%d",s);
  return 0;
}