#include "stdio.h"
int Swap(int *a,int *b);
void main()
{
	int a,b;
	printf("put two numbers!\n");
	scanf("%d%d",&a,&b);
	printf("before swap a=%d,b=%d\n",a,b);
	Swap(&a,&b);
	printf("%d\t%d\n",a,b);
}
int Swap(int *a,int *b)
{
	int t;
	t=*a;
	*a=*b;
	*b=t;
}
