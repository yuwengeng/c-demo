#include <stdio.h>
void main()
{
	int sum=0,i,n;
	printf("请输入一个奇数n:");
	scanf("%d",&n);
	for (i=1;i<=n;i=i+2)
	{
		sum=sum+i;
	}
	printf("sum=%2d\n",sum);
}