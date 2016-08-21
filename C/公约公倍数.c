#include <stdio.h>
void main()
{
    int a,b,m,n;
	int dm;
	printf("请输入两个整数：");
	scanf("%d%d",&a,&b);
	m=a;n=b;
	  do
	{dm=m%n;
	m=n;
	n=dm;
	}
	  while (dm!=0);
	  printf("%d和%d的最大公约数%d\n",a,b,m);
	  printf("%d和%d的最小公倍数%d\n",a,b,a*b/m);




}