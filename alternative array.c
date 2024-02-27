 //wap to print all 10 array elements using for loop and also print alternate elements.
#include<stdio.h>
int main()
{
	int a[10]={16,98,93,67,57,43,56,89,37,70};
	int i;
	printf("\n All array elements are: \n");
	for(i=0;i<=9;i++)
	{
		printf("\n%d",a[i]);		
	}
	printf("\n All alternate array elements are: \n");	
	for(i=0;i<=9;i=i+2)
	{			
		printf("\n%d",a[i]);			
	}
	return 0;
}
