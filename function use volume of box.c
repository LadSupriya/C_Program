#include<stdio.h>
void volume(int l, int b, int h)
{
  int v=l*b*h;
  printf("\n volume of box:%d",v);
}
int main()
{
  int l, b, h;
  printf("\nEnter length, breadth and height");
  scanf("%d%d%d",&l,&b,&h);
  volume(l, b, h);
  return 0;
}