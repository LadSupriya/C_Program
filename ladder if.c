#include<stdio.h>
int main()
{
	int per;
	printf("\n Enter your percentage: ");	
	scanf("%d",&per);		//30
	if(per>=75)
	{//52>=75
		printf("\n Grade-A");	//Grade-A
	}
	else if(per>=60)
	{//      52>=60
		printf("\n Grade-B");	//Grade-B	
	}
	else if(per>=50)
	{//      52>50
		printf("\n Grade-C");
	}
	else if(per>=35)
	{
		printf("\n Grade-D");
	}
	else
	{
		printf("\n Fail");
	}
	return 0;
}

