#include "stdio.h"
void main()
{
	int a=1;
	float b=4.000;
	double c=5.333;
	a=b;
	b=c;
	c=a;
	printf("a=%d\n",a);
	printf("b=%f\n",b);
	printf("c=%lf\n",c);
	



}