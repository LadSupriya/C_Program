#include<stdio.h>
int main()
{
  int i=2;
  int s=0;
  while(i<=20)
  {
    printf("\n %d",i);
    i=i+2;
    s=s+i;
  }
  printf("\n sum of all number is%d",s);
  return 0;
}