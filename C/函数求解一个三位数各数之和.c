#include<stdio.h>
int G(int x);
int main()
{
	int x,sum;
	printf("������һ����λ��:");
	scanf("%d",&x);
sum=G(x);
printf("sum=%d\n",sum);
}
int G(int y)
{
	int d,a,b,c;
	a=y/100;
	b=(y-a*100)/10;
	c=y%10;
	d=a+b+c;
	return d; 
}
