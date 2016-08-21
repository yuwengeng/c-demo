#include <stdio.h>
#include <stdlib.h>
long Factory(int n)
{
	int i=1;
	long f=1;
		for(i=n;i>0;i--)
			f*=i;
		return f;
}
void main()
{
	int n;
	puts("Please Input a number:");
	scanf("%d",&n);
	printf("%d!=%ld\n",n,Factory(n));
}