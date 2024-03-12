#include<stdio.h>
void sum(int a, int b, int c)
{
  int s=a+b+c;
  printf("\n sum is:%d",s);
}
int main()
{
  sum(10,20,30);
  sum(100,200,300);
  sum(45,56,67);
  
  return 0;
}