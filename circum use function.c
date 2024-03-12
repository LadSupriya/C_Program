#include<stdio.h>
void area(int r)
{
  float c;
  c=2*3.14*r;
  printf("\n circumference of circle:%f",c);
}
int main()
{
  area(7);
  area(9);
  return 0;
}