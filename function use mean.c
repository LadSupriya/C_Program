#include<stdio.h>
void mean(int a, int b, int c,int d)
{
  int s=a+b+c+d;
  int m=s/4;
  printf("\n mean is%d",m);
}
int main()
{
  int a, b, c, d;
  printf("\n enter any 4 number");
  scanf("%d%d%d%d",&a,&b,&c,&d);
  mean(a, b, c, d);
  return 0;
}