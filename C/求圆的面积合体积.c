#include "stdio.h"
#include "math.h"
#define N 3.14
void main()
{
	double a,b,r;
	printf("«Î ‰»Îqiuµƒ∞Îæ∂\n");
	scanf("%lf",&r);
	a=(double)4*N*(pow(r,2));
	b=(double)N*(4/3)*(pow(r,3));
	//a=4*N*r*r;
	//b=(4.0/3)*N*r*r*r;
	printf("%f, %f\n",a,b);
}