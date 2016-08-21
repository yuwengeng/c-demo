#include <stdio.h>
void main()
{
	int a,b,n;
	printf("请输入人数n:");
	scanf("%d",&n);
	b=n%6;
	a=(n-b)/6;
	printf("实买饮料瓶数为:%d\n ",a*5+b);

}