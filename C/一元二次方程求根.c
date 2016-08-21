#include <stdio.h>
#include <math.h> 
void main()
{
	int a,b,c;
    float x1,x2;
	printf("Please input a b c:");
	scanf("%d%d%d",&a,&b,&c);
	x1=(-b+sqrt(b*b-4*a*c))/(2*a);
    x2=(-b-sqrt(b*b-4*a*c))/(2*a);
	if(b*b-4*a*c<0)
		printf("error,Please input again\n");
    else
		printf("x1=%.0f  x2=%.0f\n",x1,x2);
}


   
