#include <stdio.h>
void main()
{
    int i,flag=1;
	int n;
	
	for (n=2;n<20;n++)
	{
	  flag=1;
	  for (i=2;i<n;i++)
	  {
	  if (n%i==0)
	  {	  flag=0;
	  break;
	  }
	  
	
	  
	  }
	if (flag)
		printf("%d是质数\n",n);
	else
		printf("%d不是质数\n",n);
	}


}