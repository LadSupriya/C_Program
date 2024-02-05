#include<stdio.h>
int main()
{
  int a,b,c;
  printf("\n Enter any 3 numbers:");
  scanf("%d%d%d",&a,&b,&c);
  if(a>b && b>c)
  {
    printf("\n Largest number is %d",a);
  }
  else if(b>a && a>c)
  {
    printf("\n Largest number is %d",b);
  }
  else if(c>a && a>b)
  {
    printf("\n Largest number is %d",c);
  }
  else
  {
    printf("\n Both are same numbers");
  }
  return 0;
}