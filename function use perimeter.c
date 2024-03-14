#include<stdio.h>
void peri(int l, int b)
{
  int p=l*b;
  printf("\n perimeter of rectangle:%d",p);
}
int main()
{
  int l, b;
  printf("\n Enter length and breadth");
  scanf("%d%d",&l,&b);
  peri(l, b);
  return 0;
}