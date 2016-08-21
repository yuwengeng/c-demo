#include "stdio.h"
main()
{
	int i,j;
	for(i=1;i<=9;i++)
	{ 
		for(j=1;j<=i;j++)
		{
			printf("%d\t",i*j);
		}
		printf("\n");
		
	}
	for(i=1;i<10;i++)
	{
		for(j=1;j<=9;j++)
		{
			if(i>j)
				printf("\t");
			else
				printf("%d\t",i*j);
			
		}
		printf("\n");
	}
	getch();
}

/*for(i = 1;i < 10; i++) 
{ 
for(j = 1;j <= 9; j++) 
{ 
if(i>j) 
printf(" \t"); 
else 
printf(" %d*%d=%d\t",i,j,i*j); 
} 
printf("\n"); 
} 
getch(); 
} */
