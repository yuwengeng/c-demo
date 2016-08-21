#include <stdio.h>
#include <math.h>
void main()
{
	int i,m=1,count=1;
	double sum=1,term;
	do{ 
		for(i=1;i<=count;i++)
		{
			m=m*i;	
		}
		term=(float)1/m;
		sum=sum+term;
		 count++;
	}while((float)1/m>pow(10,-5));
	printf("e=%lf,count=%d\n",sum,count);
}