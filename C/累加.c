#include "stdio.h"
long Add(int n);
void main()
{
	int n;
	long a;
	printf("put a number!\n");
	scanf("%d",&n);
	a=Add(n);
	printf("%d\n",a);
 
}
long Add(int n)
{
	int i;
	long sum=0;
	for(i=0;i<=n;i++)
	{
		sum=sum+i;

	 
	
	}
	return sum;


}