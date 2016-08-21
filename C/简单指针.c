#include<stdio.h>
int main()
{
	int a=0,b=1;
	char c='A';
	int *pa=&a,*pb=&b;
	char *pc=&c;
	printf("%d  %4p%4d\n",a,&a,*pa);
printf("%d   %4p%4d\n",b,&b,*pb);
printf("%c   %4p%4c\n",c,&c,*pc);
}