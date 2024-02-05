#include<stdio.h>
int main()
{
	int a,b;
	printf("\n Enter any 2 numbers");
	scanf("%d%d",&a,&b);
	if(a>b)
	{
		printf("\n Largest number is %d",a);
	}
	else if(b>a)
	{
		printf("\n Largest number is %d",b);
	}
	else
	{
		printf("\n Both are same numbers");
	}
	return 0;
}