#include "stdio.h"
void main()
{
	int a,i,flag;
	printf("put a no!\n");
	scanf("%d",&a);
	if(a<100)
	{
	for(i=2;i<a;i++)
	{
		if(a%i==0)
		{
			flag=1;
		
		}
		else
		{
			i++;
		}
	
	}
	if(flag==1)
		printf("NO!\n");
	else
		printf("YES!\n");
	}
	else
		printf("illegal!\n");

	
}
