#include <stdio.h>
void main()
{
    int num;
	int a,b,c;

	printf("请输入一个三位数：");
	scanf("%d",&num);
	  a=num/100;
	  b=(num-a*100)/10;
	  c=num%10;

	if (num==a*a*a+b*b*b+c*c*c)
		printf("该数是水仙花数！");
	else 
		printf("该数不是水仙花数！");





}