//wap to print all 7 array elements using for loop and also print sum of them. 
#include<stdio.h>
int main()
{
  int a[7]={6,7,8,9,4,9,4};
  int i, m; 
  int s=0;
  for(i=0;i<=6;i++)
  {
    printf("\n %d",a[i]);
    s=s+a[i];
    m=s/7;
  }
  printf("\n sum is:%d ",s);
  printf("\n mean is:%d",m);
 return 0;
}