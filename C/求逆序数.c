#include <stdio.h>
#include <math.h>
void main()

{
	int x,b1,b2,b3,y;
	printf("请输入一个三位整数x：");
	scanf("%d",&x);
	x=fabs(x);
	b3=x/100;
	b2=(x-b3*100)/10;
	b1=x%10;
	y=b1*100+b2*10+b3;
	printf("y=%d\n",y);









}