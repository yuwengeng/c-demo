#include<stdio.h>
main()
{
	int i,F=-40;
	double C;
	for(i=1;i<=16;i++)
	{
		C=5.0/9*(F-32);
		
       printf("%d   %.2f\n",F,C);
       F=F+10;
	}
	
}