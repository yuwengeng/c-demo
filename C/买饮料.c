#include <stdio.h>
void main()
{
	int a,b,n;
	printf("����������n:");
	scanf("%d",&n);
	b=n%6;
	a=(n-b)/6;
	printf("ʵ������ƿ��Ϊ:%d\n ",a*5+b);

}