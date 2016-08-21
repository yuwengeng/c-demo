#include <stdio.h>
#include <math.h>
void main()
{
    double x,y;
	
	printf("Input x:");
	scanf("%lf",&x);
	
	if (x==0) 
		y=0;
	if (x>0)
		y=pow(x,2);
	if (x<0)
		y=(-x)*(-x);
	printf("x=%.2lf y=%.2lf",x,y);



}