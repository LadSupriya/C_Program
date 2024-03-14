#include<stdio.h>
void area(int r)
{
  float ac;
  ac=3.14*r*r;
  printf("\n area of circle:%f",ac);
}
int main()
{
  int r;
  printf("\n Enter the radius");
  scanf("%d",&r);
  area(r);
  return 0;
}