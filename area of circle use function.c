#include<stdio.h>
void area(int r)
{
  float ac;
  ac=3.14*r*r;
  printf("\n area of circle:%f",ac);
}
int main()
{
  area(7);
  area(9);
  return 0;
}