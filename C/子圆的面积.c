#include <stdio.h>
#include <stdlib.h>
double ball(double );
void main()
{
	double r;
	puts("Please Input r:");
	scanf("%lf",&r);
    printf("circum=%lf\n",ball(r));
}
double ball(double r)
{
double circum;
circum=3.14*r*r;
return circum;
}
