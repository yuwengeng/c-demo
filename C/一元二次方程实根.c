#include <stdio.h>
#include <math.h>
void main()
{
float a,b,c,m,x1,x2;
printf("«Î ‰»Îa,b,c:");
scanf("%f%f%f",&a,&b,&c);
m=sqrt(b*b-4*a*c);
x1=(-b+m)/(2*a);
x2=(-b-m)/(2*a);
printf("x1=%5.2f,x2=%5.2f\n",x1,x2);
}