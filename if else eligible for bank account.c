#include<stdio.h>
int main()
{
	int age;
	printf("Enter your age: ");
	scanf("%d",&age);
	printf("Your age is: %d",age); //25
	
	if(age>=21 && age<=30)
	{// 35>=21  &&  35<=30
		printf("\nEligible for bank exam");
	}
	else
	{
		printf("\nNot eligible for bank exam");
	}
	return 0;
}