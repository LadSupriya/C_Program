#include<stdio.h>
void sum(int a, int b, int c)
{
  int s=a+b+c;
  printf("\n sum is:%d",s);
}
int main()
{
  int a, b, c;
  printf("\n enter any 3 numbers:");
  scanf("%d%d%d",&a,&b,&c);
  sum(a, b, c);
  return 0;
}