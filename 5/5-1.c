#include"stdio.h"
main()
{
	int a,b,c;
	printf("请输入任意一个数:");
	scanf("%d",&a);
	b=-a;
	c=a;
	if(a<0)
		printf("该数的绝对值是%d\n",b);
	else
		printf("该数的绝对值是%d\n",c);
}

