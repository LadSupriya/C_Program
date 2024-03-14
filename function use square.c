#include<stdio.h>
void square(int a, int b)
{
  int n=a*b;
  printf("\n square is:%d",n);
}
int main()
{
  int a, b;
  printf("\nEnter any 2 number");
  scanf("%d%d",&a,&b);
  square(a, b);
  return 0;
}