#include <stdio.h>
#include <math.h>
void main()
{
float a,b,c;
printf("Input a,b,c:");
scanf("%f%f%f",&a,&b,&c);
if(a+b>c&&a+c>b&&b+c>a)
{
	if(a==b&&b==c&&a==c)
	{
		printf("�ȱ�������\n");
	}
	else if(a==b||a==c||b==c)
	{
		printf("����������\n");
	}
	else if(a*a+b*b==c*c||a*a+c*c==b*b||b*b+c*c==a*a)
	{
		printf("ֱ��������\n");
	}
	else
	{
		printf("һ��������\n");
	}
	
}
	else
	{
		printf("����������\n");
	}

}