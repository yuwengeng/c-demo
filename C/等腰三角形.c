#include <stdio.h>
void main()
{
    int i,j;
	for (i=1;i<6;i++)
	{
	  for(j=1;j<=5-i;j++)
		  putchar(' ');
	
      for(j=1;j<=2*i-1;j++)
		  putchar('*');

	  putchar('\n');
	}
}