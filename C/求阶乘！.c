#include "stdio.h"
long Fun (int n);
void main()
{
	int i,n;
	printf("putn a number\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	printf("%d!=%ld\n",i,Fun(i));
	}
 
}
long  Fun(int n)
{
	static long p=1;
	p=p*n;
	return p;


}
