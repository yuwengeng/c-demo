#include <stdio.h>
void main()
{
	int i,j,k;
    for(i=1;i<=3;i++)
	{
		for(j=1;j<=7-i;j++)
		{
			printf(" ");
		}
		for(k=1;k<=2*i-1;k++)
		{
			printf("*");
		}
		printf("\n");
	}
	
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=7-i;j++)
		{
			printf(" ");
		}
		for(k=1;k<=2*i-1;k++)
		{
			printf("*");
		}
		printf("\n");
	}
	for(i=1;i<=7;i++)
	{
		for(j=1;j<=7-i;j++)
		{
			printf(" ");
		}
		for(k=1;k<=2*i-1;k++)
		{
			printf("*");
		}
		printf("\n");
	}
	for(i=1;i<=7;i++)
	{
		for(j=1;j<=1;j++)
		{
			printf("     ");
			for(k=1;k<=3;k++)
			{
				printf("*");
			}
		}
		printf("\n");
	}
	printf("   ʥ������\n");
}