#include<stdio.h>
void area(int r)
{
  float c;
  c=2*3.14*r;
  printf("\n circumference of circle:%f",c);
}
int main()
{
  int r;
  printf("\nEnter radius of circle");
  scanf("%d",&r);
  area(r);
  return 0;
}