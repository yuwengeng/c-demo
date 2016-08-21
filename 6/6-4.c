#include<stdio.h>
main()
{
	int n,i,a,b;
    printf("Please input n:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
	{
		a=i*i;
		b=i*i*i;
		printf("%d*%d=%d    %d*%d*%d=%d\n",i,i,a,i,i,i,b);
	}


}