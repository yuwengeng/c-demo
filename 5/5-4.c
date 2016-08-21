#include<stdio.h>
#include<math.h>
main()
{
	double a,b,c,d,x1,x2;
	printf("请输入三个数:");
	scanf("%lf%lf%lf",&a,&b,&c);
	d=b*b-4*a*c;
	x1=(-b+sqrt(d))/(2*a);
	x2=(-b-sqrt(d))/(2*a);
	if(a=0)
		printf("该方程不是一元二次方程");
	else
		if(d>0)
		{
			printf("x1=%f    x2=%f\n",x1,x2);
		}
		else if(d<0)
		{
			printf("该方程无解");
		}
		else
		{
			printf("x=%f\n",x1);
		}
}