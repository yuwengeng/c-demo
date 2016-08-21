#include <stdio.h>
void main()
{
	int i,j,k;
	for(i=1;i<=5;i++)
	{
	for(j=1;j<=5-i;j++)
		putchar(' ');
	for(k=1;k<=2*i-1;k++)
		putchar('*');
	putchar('\n');
	}
for(i=1;i<=4;i++)
	{
	for(j=1;j<=i;j++)
		putchar(' ');
	for(k=1;k<=9-2*i;k++)
		putchar('*');
	putchar('\n');
	}
	

	


}