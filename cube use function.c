#include<stdio.h>
void square(int a, int b, int c)
{
  int n=a*b*c;
  printf("\n cube is:%d",n);
}
int main()
{
  square(6,6,6);
  square(3,3,3);
  return 0;
}