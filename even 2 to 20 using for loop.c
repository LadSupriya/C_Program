#include<stdio.h>
int main()
{
  int i;
  int s=0;
  for(i=2;i<=20;i=i+2)
  {
    printf("\n %d",i);
    s=s+i;
  }
  printf("\n sum of all number is%d",s);
  return 0;
}