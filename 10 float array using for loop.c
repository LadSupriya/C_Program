//wap to print all 10 float array elements using for loop and also print sum of them. 
#include<stdio.h>
int main()
{
  float a[10]={6.4,7.6,8.4,9.1,4.3,9.0,4.3,5.7,4.8,5.0};
  int i, m; 
  int s=0;
  for(i=0;i<=9;i++)
  {
    printf("\n %0.1f",a[i]);
    s=s+a[i];
    m=s/10;
  }
  printf("\n sum is:%d",s);
  printf("\n mean is:%d",m);
 return 0;
}