#include <stdio.h>
#define N 80

int Len(char *a);
int main()
{
	char str[N];
	printf("Input a string:");
	gets(str);
	printf("该字符串长度为%d",Len(str));
	return 0;
}
int Len(char *a)
{
	char *p=a;
	int count =0;
	while(*p!='\0')
	{
		count++;
		p++;
	}
return count;
}