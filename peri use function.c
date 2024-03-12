#include<stdio.h>
void peri(int l, int b)
{
  int p=l*b;
  printf("\n perimeter of rectangle:%d",p);
}
int main()
{
  peri(7,5);
  peri(9,4);
  return 0;
}