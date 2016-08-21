#include <stdio.h>
#include <math.h>
main()
{
float a,b,c,d,x1,x2;
printf("请依次输入一元二次方程各项的系数（依次降低）:\n");
scanf("%f%f%f",&a,&b,&c);
if((b*b-4*a*c)>0)
{
d=sqrt(b*b-4*a*c);
x1=(-b-d)/(2*a);
x2=(-b+d)/(2*a);
printf("x1=%f\nx2=%f\n",x1,x2);
}
else
printf("该方程没有实根");
}