#include <stdio.h>
void main()
{
	int m,n,a,b,x;
	printf("请输入二个整数a,b:");
	scanf("%d%d",&m,&n);
	if(m>n)
	{
		x=m;m=n;n=x;
	}
    a=m;b=n;
	while(b!=0)
	{
		x=a%b;
	    a=b;
		b=x;
		

	}
	printf("最小公倍数为:%d\n",(m*n)/a);
	 
}