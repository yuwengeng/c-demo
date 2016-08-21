#include <stdio.h>
#include <math.h>
void main()
{
	int n=3,count=1;
	double sum=1,term;
	do{term=pow(-1,count)*(float)1/n;
		sum=sum+term;
	    n=n+2;
		count++;
	}while(fabs(term)>=pow(10,-5));
	printf("PI=%f,count=%d\n",4*sum,count);

}