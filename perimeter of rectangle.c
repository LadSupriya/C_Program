#include<stdio.h>
int main()
{
  int l=4,b=5,p;
  
  printf("\n enter the length and breadth ");
  
  scanf("%d%d",&l,&b);
  p=2*(l+b);
  printf("perimeter of rectangle is%d",p);
  return 0 ;
}