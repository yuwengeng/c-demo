#include <stdio.h>
#include <math.h>
void main()
{
    int num;
    int a,b,c;

	printf("������һ����λ��");
	scanf("%d",&num);
	a=num/100;
	b=(num-a*100)/10;
	c=num%10;
	printf("a=%d,b=%d,c=%d",a,b,c);



}