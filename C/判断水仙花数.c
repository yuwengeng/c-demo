#include <stdio.h>
void main()
{
    int num;
	int a,b,c;

	printf("������һ����λ����");
	scanf("%d",&num);
	  a=num/100;
	  b=(num-a*100)/10;
	  c=num%10;

	if (num==a*a*a+b*b*b+c*c*c)
		printf("������ˮ�ɻ�����");
	else 
		printf("��������ˮ�ɻ�����");





}