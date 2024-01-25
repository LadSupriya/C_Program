#include<stdio.h>
int main()
{
	int n;
	printf("Enter any number: ");
	scanf("%d",&n);
	if(n>0)
	{
		printf("\nNumber is positive");
	}
	else
	{
		printf("\nNumber is negative");
	}
	return 0;
} 