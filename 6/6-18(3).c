#include<stdio.h>
main()
{
	int i,j,k;
	for(i=1;i<=9;i++)
	{
		 
		for(j=1;j<=10-i;j++)
		{putchar(' ');
			printf("%4d",i*j);
           
		}
		putchar('\n');
	
		
	}
}