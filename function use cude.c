#include<stdio.h>
void cube(int a, int b, int c)
{
  int n=a*b*c;
  printf("\n cube is:%d",n);
}
int main()
{
  int a, b, c;
  printf("\nEnter any 3 number");
  scanf("%d%d%d",&a,&b,&c);
  cube(a, b, c);
  return 0;
}