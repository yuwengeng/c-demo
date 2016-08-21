#include<stdio.h>
int Fact(int n);
int main()
{
	int n,x;
	printf("Please input n:");
	scanf("%d",&n);
	x=Fact(n);
	printf("%d!=%d\n",n,x);

}
int Fact(int n)
{
	int i,result=1;
	for(i=1;i<=n;i++)
	{
		result=result*i;
	}
	return result;
}