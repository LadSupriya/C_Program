#include<stdio.h>
int main()
{
  int a,b,c,d;
  printf("\n Enter any 4 numbers:");
  scanf("%d%d%d%d",&a,&b,&c,&d);
  if(a>b && b>c && c>d)
  {
    printf("\n Largest number is %d",a);
  }
  else if(b>a && a>c && c>d)
  {
    printf("\n Largest number is %d",b);
  }
  else if(c>a && c>b && c>d)
  {
    printf("\n Largest number is %d",c);
  }
  else if(d>a && d>b && d>c)
  {
    printf("\n Largest number is %d",d);
  }
  else
  {
    printf("\n Both are same numbers");
  }
  return 0;
}