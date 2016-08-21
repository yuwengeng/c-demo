#include<stdio.h>
void main()
{
	int i,j;
	for(i=1;i<6;i++)
	{
		for(j=1;j<10-i;j++)
			putchar(' ');
		for(j=1;j<=2*i-1;j++)
			putchar('*');
		putchar('\n');
	}	
	for(i=1;i<8;i++)
	{
		for(j=1;j<10-i;j++)
			putchar(' ');
		for(j=1;j<=2*i-1;j++)
			putchar('*');
		putchar('\n');
	}	
	for(i=1;i<10;i++)
	{
		for(j=1;j<10-i;j++)
			putchar(' ');
		for(j=1;j<=2*i-1;j++)
			putchar('*');
		putchar('\n');
	}	
	for(i=1;i<8;i++)
	{
		for(j=1;j<7;j++)
			putchar(' ');
		for(j=1;j<=5;j++)
			putchar('*');
		putchar('\n');
	}
}