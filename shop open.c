#include<stdio.h>
int main()
{
  int t;
  
  printf("Enter time: ");
  scanf("%d",&t);
  if(t>=9 && t<=22)
  {
    printf("\n Shop is open");
    if(t>=14 && t<=18)
    {
      printf("\n Happy hours!! Buy 4 get 1 free");
    }
  }
  else
  {
    printf("\n Shop is closed");
  }
  
  return 0;
}