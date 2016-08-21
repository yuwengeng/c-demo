#include<stdio.h>
#include<string.h>
int Strlen(char *b);
int main()
{   
	int n;
	char a[100];
	char *b=a;
	printf("请输入一串字符:");
	gets(b);
	n=Strlen(b);
	printf("该字符串长度为%d\n",n);
}
int Strlen(char *b)
{
	char *p=b;
	int count=0;
	while((*p)!='\0')
	{count++;
	p++;
	}
	return count;
}
