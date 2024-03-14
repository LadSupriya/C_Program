#include<stdio.h>
void area(int l, int b)
{
  int a=l*b;
  printf("\n area of rectangle:%d",a);
}
int main()
{
  int l, b;
  printf("\nEnter length and breadth");
  scanf("%d%d",&l,&b);
  area(l, b);
  return 0;
}