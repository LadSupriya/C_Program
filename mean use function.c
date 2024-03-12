#include<stdio.h>
void mean(int a, int b, int c, int d)
{
  int s=a+b+c;
  float m=s/4;
  printf("\nmean is%f",m);
}
int main()
{
  mean(50,60,30,70);
  mean(1,2,3,4);
  return 0;
}