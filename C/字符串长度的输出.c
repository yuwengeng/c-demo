#include<stdio.h>
#include<string.h>
int Strlen(char *b);
int main()
{   
	int n;
	char a[100];
	char *b=a;
	printf("������һ���ַ�:");
	gets(b);
	n=Strlen(b);
	printf("���ַ�������Ϊ%d\n",n);
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
