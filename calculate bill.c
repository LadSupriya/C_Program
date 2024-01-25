#include<stdio.h>
int main()
{
  char pname;
  int rate, qty,bill;
  printf("\n Enter product name: ");
  scanf("%s",&pname);
  printf("\n Enter product rate:");
  scanf("%d",&rate);
  printf("\n Enter product quantity:");
  scanf("%d",&qty);
  bill=rate*qty;
  printf("\ncalculate bill is %d",bill);
  return 0;
}