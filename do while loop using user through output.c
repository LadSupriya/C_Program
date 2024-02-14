#include<stdio.h>
int main()
{
  int i=1,n;
printf("\n Enter any number: ");
  scanf("%d",&n);  
  do
  {
    printf("\n %d",i);
    i++;
  }while(i<=n);
return 0;
} 