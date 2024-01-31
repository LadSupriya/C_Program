#include<stdio.h>
int main()
{
  char sname[20];
  int p,c,m,tm;
  float per;
  int f=0;
  printf("Enter student name: ");
  scanf("%s",&sname);        //shital
  printf("Enter marks of 3 subjects: ");
  scanf("%d%d%d",&p,&c,&m);    //30  40  50
  tm=p+c+m; //30+40+50=120
  per=tm/3;  //120/3=40
  printf("\n Student name is: %s",sname);  //shital
  printf("\n Marks in Physics is: %d",p); //30
  printf("\n Marks in Chemistry is: %d",c);  //40
  printf("\n Marks in Maths is: %d",m);   //50
  printf("\n Total marks is: %d",tm);  //120
  printf("\n Percentage is: %0.2f",per); //40
  
  if(p>=35 && c>=35 && m>=35)
  {// 30    40>35    50>35
    printf("\n Student is pass");
    printf("\n Congratulations!!");
  
  }
  else
  {
    printf("\n Student is fail");
    if(p<35)
    {
      printf("\n Fail in physics");
      f++;  
    }
    if(c<35)
    {
      printf("\n Fail in chemistry");
      f++;
    }
    if(m<35)
    {
      printf("\n Fail in mathmatics");
      f++;
    }
        
  }
  printf("\n Total fail subjects: %d",f);
  return 0;
}