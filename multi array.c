#include<stdio.h>
int main()
{
	int a[3][3];
	int r,c,s=0;
	printf("\n Enter matrix of size 3x3: \n");
	for(r=0;r<=2;r++)
	{
		for(c=0;c<=2;c++)
		{
			scanf("%d",&a[r][c]);
			//s=s+a[r][c];	
		}
	}
	for(r=0;r<=2;r++)
	{
		for(c=0;c<=2;c++)
		{
			printf("  %d",a[r][c]);
			//   		  a[2][2]
			s=s+a[r][c];	
		}
		printf("\n");
	}
	printf("\n Sum is %d",s);
	return 0;
}


