#include<stdio.h>
int Max(int a,int b);
int main()
{
	int a,b,max;
	printf("Please input a and b:");
	scanf("%d%d",&a,&b);
	max=Max(a,b);
	if(max==1)
		printf("Max=%d\n",a);
	else
		printf("Max=%d\n",b);
	
}
int Max(int a,int b)
{
	int flag;
	if(a>b)
	{
		flag=1;
	}
	else
	{
	flag=0;
	}
	return flag;
}

