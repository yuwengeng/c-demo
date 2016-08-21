#include <stdio.h>

void main()
{
int product;
int i = 0,j =0;
for (i =1;i<=9;i++)  
{
for (j = 1;j<=9;j++)  
{
product =i*j;
printf("%dx%d=%-2d ", i, j, product);
}
printf("\n");
}
}


/*int i=0,j=0;
for(i=1;i<=9;i++)
{
	for(j=1;j<=9;j++)
	{
		
		printf("%d\t",i*j);
	
	}
	printf("\n");

}
}*/