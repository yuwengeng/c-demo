#include "stdio.h"
void main()
{
	int a=0,sum=0,flag=0;
	do
	{
		printf("输入你所想的整数\n");
		scanf("%f",&a);
		sum=sum+a;
		flag++;
		printf("现在和为%d\n",sum);
	}
	while(a>0);
	if(a<=0)
		printf("输入错误，计算结束\n");
	printf("累加项数%d",flag);
}