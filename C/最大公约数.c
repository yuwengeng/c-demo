#include <stdio.h>
void main()
{
	int m,n,a,b,x;
	printf("�������������a,b:");
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
	printf("���Լ��Ϊ:%d\n",a);
	 
}