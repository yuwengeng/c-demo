#include<stdio.h>
void main()
{
	char a;
	printf("Please input a:");
	scanf("%c",&a);
	if (a>96&&a<123)
	{
		printf("���ַ�ΪСд��ĸ\n");
	}
	else if(a>47&&a<58)
	{
		printf("���ַ�Ϊ�����ַ�\n");
	}
	else if(a>64&&a<91)
	{
		printf("���ַ�Ϊ��д��ĸ\n");
	}
	else
	{
		printf("���ַ�Ϊ�����ַ�\n");
	}
}