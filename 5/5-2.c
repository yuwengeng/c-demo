#include"stdio.h"
main()
{
	int a,b;
    printf("请输入一个整数:");
	scanf("%d",&a);
	b=a%2;
	if(b!=0)
		printf("该数为奇数\n");
	else
		printf("该数为偶数\n");


}