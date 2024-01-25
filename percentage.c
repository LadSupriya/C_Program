#include<stdio.h>
int main()
{
  char sname;
  int phy, chem,math, tm;
  float per;
  printf("\n enter student name :");
  scanf("%s",&sname);
  printf("\n enter marks of phy :");
  scanf("%d",&phy); 
  printf("\n enter marks of chem :");
  scanf("%d",&chem); 
  printf("\n enter marks of math :");
  scanf("%d",&math); 
  tm=phy+chem+math;
  printf("\n Total marks:%d",tm);
  per=tm/3;
  printf("\n Total percentage: %f",per);
  if(phy>=35 && chem>=35 && math>=35)
  {
    printf("\nPass");
  }
  else
  {
    printf("\nFail");
  }
  return 0;
}