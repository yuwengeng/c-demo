#include<stdio.h>
void main()
{
	char a;
	printf("Please input a:");
	scanf("%c",&a);
	if (a>96&&a<123)
	{
		printf("该字符为小写字母\n");
	}
	else if(a>47&&a<58)
	{
		printf("该字符为数字字符\n");
	}
	else if(a>64&&a<91)
	{
		printf("该字符为大写字母\n");
	}
	else
	{
		printf("该字符为其他字符\n");
	}
}