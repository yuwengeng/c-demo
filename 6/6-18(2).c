#include<stdio.h>
main()
{
	int i,j;
	for(i=1;i<=9;i++)
	{
		{for(j=1;j<=i;j++)
			
			printf("%4d",i*j);
		}
		putchar('\n');
	}
}