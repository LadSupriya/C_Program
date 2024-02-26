#include<stdio.h>
int main()
{
  int a[3][3];
  int r, c, s=0;
  printf("\nEnter matrix size of 3*3:\n");
  for(r=0;r<=2;r++)
  {
    for(c=0;c<=2;c++)
    {
      scanf("%d",&a[r][c]);
      s=s+a[r][c];
    }
  }
  printf("\n sum is%d",s);
  return 0;
}