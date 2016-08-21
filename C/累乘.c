#include "stdio.h"
long Fact(int n);
void main()
{
	int n;
	long a;
	printf("put a number!\n");
	scanf("%d",&n);
	a=Fact(n);
	printf("%d\n",a);
 
}
long Fact(int n)
{
	int i;
	long ji=1;
	for(i=1;i<=n;i++)
	{
	ji*=i;

	 
	
	}
	return ji;


}