#include<stdio.h>
int F(int a);
int main()
{ 
	int a,d;
	printf("Please input a:");
	scanf("%d",&a);
    d=F(a);
	printf("sum=%d\n",d);
}
int F(int n)
{
	int sum=0,i;
	for(i=1;i<=n;i++)
	{
		sum=sum+i;
	}
	return sum;
}
