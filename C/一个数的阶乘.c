#include <stdio.h>
void main()
{
    int i,n;
	long p=1;

	printf("Please enter n:");
	scanf("%d",&n);
	for (i=1;i<=n;i++)
	{
	  p=p*i;
	}
 printf("%d!=%ld\n",n,p);

}