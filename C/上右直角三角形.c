#include <stdio.h>
void main()
{
    int i,j;
	for(i=1;i<6;i++)
	{
	  for(j=1;j<i;j++)
		  putchar(' ');
	  
	  for(j=1;j<=6-i;j++)
		  putchar('*');
	  putchar('\n');
	
	}


}